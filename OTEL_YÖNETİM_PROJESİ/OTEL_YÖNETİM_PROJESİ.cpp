#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

class otel
{	
	string *customer_name[50], *customer_surname[20];

	enum status {
		bos, dolu
	}oda[50];

	public:
	//otel(){}
		otel();

		//functions here
		void menu();

	~otel(){}
};
	
//functions definitions here, outside of the class
 otel::otel()
{	 
	 menu();
}

 void otel::menu()
 {
	 int secim;
	 cout << "OTELE HOS GELDINIZ." << endl;
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

	 }
	 if (2 == secim)
	 {

	 }

 }

int main()
{
	otel hotel;

	return 0;
}