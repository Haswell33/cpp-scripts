#include <iostream>

using namespace std;

class Samochod{
	public:
	string marka, model;
	int przebieg, cena;
	
	void wczytaj();
	void wypisz();
};

class Student{

	public:
		string imie, nazwisko;
		int numer_studenta, ilosc_ocen;
		static int ilosc_studentow;
		static int max_studentow;
		double *wsk;
		
		//Konstruktory
		Student(string k_imie="", string k_nazwisko=""){
			imie = k_imie;
			nazwisko = k_nazwisko;
			ilosc_ocen=0;
			wsk = new double[10];
			this->ilosc_studentow++;
			numer_studenta=ilosc_studentow;
		}
	
	public:
		void wczytaj();
		void wypisz();
		//void inicjuj();
		//void zwolnij();
		void wpisz_ocena();
		double sr_ocen_studenta();
};
int Student::ilosc_studentow=0;
int Student::max_studentow=20;

void Student::wczytaj(){
	cout << "Podaj imie studenta: ";
	cin >> this->imie;
	cout << endl <<  "Podaj naziwsko studenta: ";
	cin >> this->nazwisko;
	
	cout << endl <<  "Podaj numer studenta: ";
	cin >> this->numer_studenta;
	this->ilosc_studentow++;
}

void Student::wypisz(){
	cout << this->imie << endl << this->nazwisko << endl << this->numer_studenta << endl << endl;
}

/*void Student::inicjuj(){
	this->ilosc_ocen = 0;
	wsk = new double[10];
	this->ilosc_studentow++;
}

void Student::zwolnij(){
	if(this->wsk!=NULL){
		delete[]this->wsk;
		this->wsk = NULL;
	}
}*/

void Student::wpisz_ocena(){
	cout << "Ocena: ";
	cin >> this->wsk[this->ilosc_ocen];
	this->ilosc_ocen++;
}

double Student::sr_ocen_studenta(){
	double sum_sr=0, sr=0;
	for(int i = 0; i<this->ilosc_ocen; i++)
		sum_sr = sum_sr+this->wsk[i];
		
	sr = sum_sr/this->ilosc_ocen;
	cout << "Srednia: " << sr << endl;
}

void Samochod::wczytaj(){
	cout << "Podaj marke: ";
	cin >> this->marka;
	
	cout << endl <<  "Podaj model: ";
	cin >> this->model;
	
	cout << endl <<  "Podaj przebieg: ";
	cin >> this->przebieg;
	
	cout << endl << "Podaj cene: ";
	cin >> this->cena;
}

void Samochod::wypisz(){
	cout << this->marka << endl << this->model << endl << this->przebieg << endl << this->cena << endl;
}

int main(){
	//Samochod x;
	string imie, nazwisko;
	int studenci[20];
	
	for(int i = 0; i<20; i++)
	{
		
	}
	
	
	Student student_1("Karol", "Siedlaczek");
	Student student_2("Adam", "Adamski");
	
	cout << "Podaj imie kolejnego studenta" << endl;
	cin >> imie;
	cout << "Podaj nazwisko kolejnego studenta" << endl;
	cin >> nazwisko;
	Student student_3(imie, nazwisko);
	
	student_1.wypisz();
	student_2.wypisz();
	student_3.wypisz();
	
	student_1.wpisz_ocena();
	student_1.wpisz_ocena();
	student_1.wpisz_ocena();
	student_1.wpisz_ocena();
	student_1.wpisz_ocena();
	
	student_1.sr_ocen_studenta();

	
	
	//x.wczytaj();
	//x.wypisz();
	//y.wczytaj();
	//y.inicjuj();
	//y.wpisz_ocena();
	//y.sr_ocen_studenta();
	//y.wypisz();
	//y.zwolnij();
	
	return 0;
}

/*
funkcje 
void wczytaj(Samochod &ref){
	cout << "Podaj marke: ";
	cin >> ref.marka;
	cout << endl <<  "Podaj model: ";
	cin >> ref.model;
	cout << endl <<  "Podaj przebieg: ";
	cin >> ref.przebieg;
	cout << endl << "Podaj cene: ";
	cin >> ref.cena;
}

void wczytaj(Samochod ref){
	cout << ref.marka << endl << ref.model << endl << ref.przebieg << endl << ref.cena << endl;
}
delete x; delete y; destruktor bezparametrowy 

*/
