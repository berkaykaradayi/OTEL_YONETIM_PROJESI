#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

#define  bosluk endl

class otel
{	
	string *customer_name[55], *customer_surname[55];
	int oda_sayac = 0, toplam_para = 0;
	int seminer_oda_sayac = 0;
	int toplam_sayac = 0, toplam_sayac2=0, toplam_sayac3=0;
		int tek_oda_sayac = 0, cift_oda_sayac=0;
		
	int* customer_total_price[51];
	 int* customer_reserved_days[51];

	enum status {
		bos, dolu
	}oda[51]; // was 50

	public:
	//otel(){}
		otel();

		//functions here
		void menu();
		void oda_rezervasyon();
		void oda_bosaltma();
		void dolu_oda_sayisi();
		void oda_raporu();
		void seminer_oda_raporu();
		void toplam_gelir();

	~otel(){}
};
	
//functions definitions here, outside of the class
 otel::otel()
 {
	 
	 menu();
}

 void otel::oda_rezervasyon()
 {
	 int gun, oda_secim;
	 string name, surname;

	 int i = 1, j=16, k=46, musteri_para_toplam=0;

	 cout << "Oda Rezervasyonuna Hos Geldiniz!!" << endl;
		
	 if (toplam_sayac >= 50)//oda_sayac
	 {
		 cout << "Uzgunuz, bos oda ve seminer odasi yok" << endl;
	 }
	 else
	 {  
		 cout << "Hangi odayi secmek istiyorsunuz?"<<endl;
		 cout << "1- Tek Kisilik Oda, Fiyat: 300 TL"<<endl;
		 cout << "2- Cift Kisilik Oda, Fiyat: 500 TL" << endl;
		 cout << "3- Seminer Odasi, Fiyat: 400 TL" << endl;     
		 cin >> oda_secim;
			
		 if (1 == oda_secim) //this reverse notation refers to Yoda Style, 
								//that prevents to assign a value if you forget "==", 
									//otherwise, it will assign unwanted value and cause error.
		 {

			 for (; i < 16; i++)
			 {
				 if (oda[i] != dolu)
				 {
					 oda[i] = dolu;

					 cout << "Lutfen Adinizi Girin:" << endl;
					 cin >> name;
					 cout << "Lutfen Soyadinizi Girin:" << endl;
					 cin >> surname;

					 cout << "Kac gun kalmak istiyorsunuz?" << endl;
					 cin >> gun;

					 musteri_para_toplam = gun * 300; // for calculating individual customer's money
					 toplam_para += gun * 300;
					 oda_sayac++; // For total room count
						tek_oda_sayac++;//for single-person room cout
						cout << "Oda numaraniz: " << i << endl;
					 customer_name[i] = new string;
					 *customer_name[i] = name;

					 customer_surname[i] = new string;
					 *customer_surname[i] = surname;
					 
					 customer_reserved_days[i]= new int;
					 *customer_reserved_days[i] = gun; /// last added


					 customer_total_price[i] = new int;
					 *customer_total_price[i] = musteri_para_toplam; // for calculating individual customer's money
					 
								//cout << "Odenen para: " << *customer_total_price[i]<<endl;
					 break;
				 }
				 

			 }

			 if (16 == i)
			 {
				 cout << "Uzgunuz, Tek Kisilik Odamiz maalesef yok." << endl;
			 }

		 }
		 else if (2 == oda_secim)
		 {
			 for (; j < 46; j++)
			 {
				 if (oda[j] != dolu)
				 {
					 oda[j] = dolu;

					 cout << "Lutfen Adinizi Girin:" << endl;
					 cin >> name;
					 cout << "Lutfen Soyadinizi Girin:" << endl;
					 cin >> surname;

					 cout << "Kac gun kalmak istiyorsunuz?" << endl;
					 cin >> gun;

					 musteri_para_toplam = gun * 500; // for calculating individual customer's money
					 toplam_para += gun * 500;
					 oda_sayac++; // Toplam oda Sayısı için
					 cift_oda_sayac++; // for double-person room count
					 cout << "Oda numaraniz: " << j<<endl;
					 
					 customer_name[j] = new string;
					 *customer_name[j] = name;   

					 customer_surname[j] = new string;
					 *customer_surname[j] = surname;

					 customer_reserved_days[j] = new int;
					 *customer_reserved_days[j] = gun; /// last added

					 customer_total_price[j] = new int;
					 *customer_total_price[j] = musteri_para_toplam; // for calculating individual customer's money

					 cout << "Odenen para: " << *customer_total_price[j] << endl;
					 break;
				 }


			 }

			 if (46 == j)
			 {
				 cout << "Uzgunuz, Cift Kisilik Odamiz maalesef yok." << endl;
			 }

		 }

		 else if (3 == oda_secim)
		 {
			 for (; k < 51; k++)
			 {
				 if (oda[k] != dolu)
				 {
					 oda[k] = dolu;

					 cout << "Lutfen Adinizi Girin:" << endl;
					 cin >> name;
					 cout << "Lutfen Soyadinizi Girin:" << endl;
					 cin >> surname;

					 cout << "Kac gun kalmak istiyorsunuz?" << endl;
					 cin >> gun;

					 musteri_para_toplam = gun * 400; // for calculating individual customer's money
					 toplam_para += gun * 400;

					 seminer_oda_sayac++; // Seminer Oda Sayısı için
					 //oda_sayac++;
					 cout << "Seminer Oda numaraniz: " << k<<bosluk;
					 customer_name[k] = new string;
					 *customer_name[k] = name;

					 customer_surname[k] = new string;
					 *customer_surname[k] = surname;

					 customer_reserved_days[k] = new int;
					 *customer_reserved_days[k] = gun; /// last added

					 customer_total_price[k] = new int;
					 *customer_total_price[k] = musteri_para_toplam; // for calculating individual customer's money

								cout << "Odenenecek para: " << *customer_total_price[k]<<endl;
					 break;
				 }


			 }

			 if (51 == k)
			 {
				 cout << "Uzgunuz, Butun Seminer Odalarimiz maalesef dolu." << endl;
			 } 
		 }
		 else
			 cout << "Lutfen dogru secim yapiniz!!!" << bosluk;

		
	 }
 }

 void otel::oda_bosaltma()
 {	
	 int oda_no, /*seminer_no,*/ oda_secim;
	 //int toplam_sayac=0;

	 cout << "Hangi odayi bosaltmak istiyorsunuz? Normal Oda icin 1, Seminer Odasi icin 2 'ye basin."<<endl;
	 cin >> oda_secim;

	 toplam_sayac = oda_sayac + seminer_oda_sayac;

	 if (1 == oda_secim)
	 {
		 if (0==toplam_sayac)//oda_sayac == 0 && seminer_oda_sayac==0
		 {
			 cout << "Butun odalarimiz zaten bos. Bosaltma islemi gerceklestiremiyoruz. Lutfen baska bir islem yapiniz.";
		 }
		 else
		 {
			 cout << "Lutfen bosaltmak istediginiz oda numarasini girin" << endl;
			 cin >> oda_no;

			 if (oda_no > 50)
			 {
				 cout << "Boyle bir oda numarasi yok. Lutfen tekrar girin." << endl;
			 }
			 else
			 {						

				 if (bos == oda[oda_no])
				 {
					 cout << "Bosaltmak Istediginiz Oda Zaten Bos!!" << endl;
				 }
				 else
				 {
					 cout << "----------Oda  Silinmeden Once Oda Bilgileri-----------:" << endl << endl;
					 cout << "Isim: " << *customer_name[oda_no] << endl;
					 cout << "Soyisim: " << *customer_surname[oda_no] << endl;
					 cout << "Odenecek Para: " << *customer_total_price[oda_no] << endl;
					 cout << "-----------------------------------------------------------" << endl << endl;

					 oda[oda_no] = bos;
					 delete  customer_name[oda_no];
					 delete customer_surname[oda_no]; 
					 oda_sayac--;

					 if (1<=oda_no && oda_no<=15)
					 {
						 tek_oda_sayac--;
					 }
					 else if (16 <= oda_no && oda_no <= 45)
					 {
						 cift_oda_sayac--;
					 }
					 

					 
					  
					 cout << "Oda bosaltilmistir." << endl << endl;
				 }
			 }

		 }
	 }
	 else if (2 == oda_secim)
	 {
		 if (0==toplam_sayac) 
		 {
			 cout << "Butun odalarimiz zaten bos. Bosaltma islemi gerceklestiremiyoruz. Lutfen baska bir islem yapiniz.";
		 }
		 else
		 {
			 cout << "Lutfen bosaltmak istediginiz seminer oda numarasini girin" << endl;
			 cin >> oda_no;

			 if (oda_no > 50)
			 {
				 cout << "Boyle bir seminer oda numarasi yok. Lutfen tekrar girin." << endl;
			 }
			 else
			 {						

				 if (bos == oda[oda_no])
				 {
					 cout << "Bosaltmak Istediginiz Seminer Odasi Zaten Bos!!" << endl;
				 }
				 else
				 {
					 cout << "----------Oda  Silinmeden Once Oda Bilgileri-----------:" << endl << endl;
					 cout << "Isim: " << *customer_name[oda_no] << endl;
					 cout << "Soyisim: " << *customer_surname[oda_no] << endl;
					 cout << "Odenecek Para: " << *customer_total_price[oda_no] << endl;
					 cout << "-----------------------------------------------------------" << endl << endl;

					 oda[oda_no] = bos;
					 delete  customer_name[oda_no];
					 delete customer_surname[oda_no]; 
					 seminer_oda_sayac--;
					 cout << "Seminer Odasi bosaltilmistir." << endl << endl;
				 }
			 }

		 }
	 }
	 else
		 cout << "YANLIS TERCIH YAPTINIZ!! LUTFEN TEKRAR DENEYIN." << endl;

 }
void otel::dolu_oda_sayisi()
 { 
	toplam_sayac2 = oda_sayac + seminer_oda_sayac;
	if (0 == toplam_sayac2)
	{
		cout << "Butun odalarimiz bos."<<endl;
	}
	else
	cout << "Toplam dolu oda sayisi: " << toplam_sayac2<<endl;

 }

void otel::oda_raporu()
{	
	//toplam_sayac3 = oda_sayac + seminer_oda_sayac;

	if (0==oda_sayac)
	{
		cout << "Butun odalarimiz bos..." << endl;
	}
	else
	{
		cout << "----------------ODA BILGILERI-----------------"<<endl;
		cout << "   ---------------------------------------   " << endl;
		cout << "   ---------------------------------------  " << endl;
		cout << "Isim:             " << "Soyisim:                " << "Kalinan Gun Sayisi:        " << "Odenecek Tutar:  "<<bosluk;
		
			if (0!=tek_oda_sayac && 0!=cift_oda_sayac)
			{
				for (int i = 1; i <= tek_oda_sayac; i++)
				{
					cout << *customer_name[i] << "              " << *customer_surname[i] << "              "<<*customer_reserved_days[i] << "             "<<*customer_total_price[i]<<bosluk;
		
					cout << "   --------------------------------------------------------------   " << endl;
				}

				for (int j = 16; j <= 16 + cift_oda_sayac - 1; j++)
				{
					cout << *customer_name[j] << "              " << *customer_surname[j] << "              " << *customer_reserved_days[j] << "             " << *customer_total_price[j] << bosluk;

					cout << "   --------------------------------------------------------------   " << endl;
				}				
				
			}
			else if(0!=tek_oda_sayac)
			{
				for (int i = 1; i <= tek_oda_sayac; i++)
				{
					cout << *customer_name[i] << "              " << *customer_surname[i] << "              " << *customer_reserved_days[i] << "             " << *customer_total_price[i] << bosluk;

					cout << "   --------------------------------------------------------------   " << endl;
				}

			}		
			else
			{
				for (int j = 16; j <= 16 + cift_oda_sayac - 1; j++)
				{
					cout << *customer_name[j] << "              " << *customer_surname[j] << "              " << *customer_reserved_days[j] << "             " << *customer_total_price[j] << bosluk;

					cout << "   --------------------------------------------------------------   " << endl;
				}

			}
	}
	
	
}
void otel::seminer_oda_raporu()
{
	
	
		
}

void otel::toplam_gelir()
{

}

 void otel::menu()
 {
	 int secim;
	 for (int i = 1; i <= 50; i++) // Total room counts: 45(for room) + 5 (seminer room), means: 50 rooms.
	 {
		 oda[i] = bos; //assigning "bos" , which means empty, to all room in firstly. So rooms will be available to get booked for customers.
	 }

	 cout << "           OTELE HOS GELDINIZ." << endl;
		cout << "-------------------------------------------"<<endl;
		cout << "-------------------------------------------" << endl;
	 
	 
	 do
	 {
		

		cout << "Lutfen yapmak istediğiniz islemi secin." << endl;

		 cout << "1 - Oda Rezervasyonu." << endl;
		cout << "2 - Oda Bosaltma." << endl;
		cout << "3 - Dolu Oda Sayisi." << endl;
		cout << "4 - Yatak Odasi Raporu." << endl;
		 cout << "5 - Seminer Odasi Raporu." << endl;
		 cout << "6 - Gunluk Toplam Gelir." << endl;
		cout << "7 - Cikis Yap..." << bosluk;

		 cin >> secim;
		
		 if (1 == secim)
		 {
			 oda_rezervasyon();
		 }
		 else if (2 == secim)
		 {
			 oda_bosaltma();
		 }
		 else if (3 == secim)
		 {
			 dolu_oda_sayisi();
		 }
		 else if (4 == secim)
		 {
			oda_raporu();
		 }
		 else if (5 == secim)
		 {
			 seminer_oda_raporu();
		 }
		 else if (6 == secim)
		 {
			 toplam_gelir();
		 }

		 else if (7 == secim)
		 {
			 cout << "Cikis Yapiliyor..." << endl;
		 }
		 else
			 cout << "YANLIS SECIM!! LUTFEN TEKRAR DENEYIN"<<endl;
			 
	 } while (secim!=7);
	 
	 
	 

 }
 

int main()
{
	otel hotel; // we create object named "hotel", so it will call constructor that has no parameter(s).
	           
	            //we are done for main. All operations will be executed from constructor, which is "otel". 
							//And that will call the menu() function that will run all other operations.
	return 0;   
}



//1)tek_oda_sayac ve cift_oda_sayac eklendi oda_bosaltma() içine.
// 2)   ///////////////////// seminer_oda bosaltma eklenecek 