#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

class otel
{	
	string *customer_name[50], *customer_surname[50];
	int sayac=0;
	enum status {
		bos, dolu
	}oda[50];

	public:
	//otel(){}
		otel();

		//functions here
		void menu();
		void oda_rezervasyon();

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
	 cout << "Oda Rezervasyonuna Hos Geldiniz!!" << endl;
		
	 if (sayac >= 45)
	 {
		 cout << "Uzgunuz, bos odamiz yok"<<endl;
	 }
	 else
	 { 
			
		 cout << "Lutfen Adinizi Girin:"<<endl;
		 cin >> name;
		 cout << "Lutfen Soyadinizi Girin:" << endl;
		 cin >> surname;
		 
		 cout << "Hangi odayi secmek istiyorsunuz?"<<endl;
		 cout << "1- Tek Kisilik Oda, Fiyat: 300 TL"<<endl;
		 cout << "2- Çİft Kisilik Oda, Fiyat: 500 TL" << endl;
		 cout << "3- Seminer Odasi, Fiyat: 400 TL" << endl;     
		 cin >> oda_secim;
			
		 if (1==oda_secim) //this reverse notation refers to Yoda Style, 
								//that prevents to assign a value if you forget "==", 
									//otherwise, it will assign unwanted value. 
		 {


		 
		 }
			


		 cout << "Kac gun kalmak istiyorsunuz?" << endl;
		 cin >> gun;
			
		
	 }
 }

 void otel::menu()
 {
	 int secim;
	 for (int i = 1; i <= 45; i++)
	 {
		 oda[i] = bos;
	 }

	 do
	 {
		cout << "           OTELE HOS GELDINIZ." << endl;
		cout << "-------------------------------------------"<<endl;
		cout << "-------------------------------------------" << endl;

		cout << "Lutfen yapmak istediğiniz islemi secin." << endl;

		 cout << "1 - Oda Rezervasyonu." << endl;
		cout << "2 - Oda Bosaltma." << endl;
		cout << "3 - Dolu Oda Sayisi." << endl;
		cout << "4 - Yatak Odasi Raporu." << endl;
		 cout << "5 - Seminer Odasi Raporu." << endl;
		 cout << "6 - Gunluk Toplam Gelir." << endl;
		cout << "7 - Cikis Yap..." << endl;

		 cin >> secim;
		
		 if (1 == secim)
		{
			 oda_rezervasyon();
		 }
		 if (2 == secim)
		{

		}


	 } while (secim!=7);
	 
	 
	 

 }

int main()
{
	otel hotel;

	return 0;
}