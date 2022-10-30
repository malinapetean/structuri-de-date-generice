#include<iostream>
#include<string>

using namespace std;
struct Persoana {
	int varsta;
	string nume = "";
	string prenume = "";

	string afisare()
	{
		string txt = "";

		txt += "Numele: " + this->nume + "\n";
		txt += "Prenumele: " + this->prenume + "\n";
		txt += "Varsta: " + this->varsta;
		txt += "\n";
		return txt;
	}
};
