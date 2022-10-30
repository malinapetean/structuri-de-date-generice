#include<iostream>
#include<string>
using namespace std;

struct Masina {
	int an;
	string brand = "";
	string culoare = "";
	int nrlocuri;

	string afisare()
	{
		string t = "";
		t += "Brandul este: " + this->brand+"\n";
		t += "Culoarea este: " + this->culoare+ "\n";
		t += "Anul: " + this->an ;
		t += "\n" ;
		t += "Numarul de locuri: " + this->nrlocuri;
		t += "\n";
		return t;
	}
};