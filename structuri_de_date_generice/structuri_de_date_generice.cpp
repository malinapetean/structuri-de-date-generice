//#include "ControllerMasina.h"
#include"Stiva.h"

int main()
{
   
	/*Lista<Masina>lista;
	ControllerMasina masini;*/
	Stiva<Masina> stiva;

	Masina m(1,2005, "Dacia", "Rosu", 5);
	Masina m2(2,2000, "Audi", "Gri", 5);
	Masina m3(3,1990, "BMW", "Gri", 4);
	Masina m4(4,2010, "Aixam", "Alb", 2);
	Masina m5(5,2011, "Ford", "Alb", 5);
	Masina m6(2,2003, "Audi", "Galben", 2);
	/*lista.addEnd(m);
	lista.addEnd(m2);
	lista.addEnd(m3);
	lista.addEnd(m4);
	lista.addPoz(m5, 2);*/
	//lista.set(m,1);	
	//lista.removePoz(1);
	/*Nod<Masina>* aux = lista.iterator();
	
	while (aux != NULL) {

		cout<<aux->data.afisare();
		cout << endl;
		aux = aux->next;
	}*/
	//cout<<lista.get(2)->data.afisare();
	/*
	masini.desplay();
	cout << masini.existenta(m6);
	cout << masini.addMasina(m6);
	cout << masini.getPosition(m6);
	masini.updateMasina(m6);
	masini.desplay();
	masini.load();
	cout << lista.size();*/

	stiva.push(m);
	stiva.push(m2);
	stiva.push(m3);
	stiva.pop();
	cout << stiva.peek().afisare();
}


