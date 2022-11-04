#include<iostream>
#include<string>
using namespace std;

struct Masina {

	int id;
	int an;
	string brand = "";
	string culoare = "";
	int nrlocuri;
	Masina()
	{

	}
	Masina(int id,int an, string brand, string culoare, int nrloc)
	{
		this->id = id;
		this->an = an;
		this->brand = brand;
		this->culoare = culoare;
		this->nrlocuri = nrloc;
	}


	string afisare()
	{
		string t = "";
		t += "Id-ul este: " + to_string(this->id)+"\n";
		t += "Brandul este: " + this->brand+"\n";
		t += "Culoarea este: " + this->culoare+ "\n";
		t += "Anul: " + to_string(this->an);
		t += "\n" ;
		t += "Numarul de locuri: " + to_string(this->nrlocuri);
		t += "\n";
		return t;
	}
};