
#include"Lista.h"



struct ControllerMasina
{
private:
	Lista<Masina> masini;
public:
	ControllerMasina()
	{

	}
	void load()
	{
		/*Masina m(2011, "Ford", "Alb", 5);

		masini.addEnd(m);*/
	}
	void desplay(Lista<Masina> lista)
	{
		Nod<Masina>* head = lista.iterator();
		while (head->next != NULL)
		{
			cout << head->data.afisare();
			head = head->next;
		}
	}
};

