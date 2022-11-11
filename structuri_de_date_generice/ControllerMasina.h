
#include"Lista.h"

#include<fstream>



struct ControllerMasina
{
private:
	Lista<Masina> masini;
	int poz = 0;

public:
	ControllerMasina()
	{
		this->load();
	}
	void load()
	{
		ifstream fin("masini.txt");


		while (!fin.eof())
		{
			int id;
			fin >> id;
			int an;
			fin >> an;
			string marca;
			fin >> marca;
			string culoare;
			fin >> culoare;
			int nrlocuri;
			fin >> nrlocuri;
			Masina m =  Masina(id,an, marca, culoare, nrlocuri);
			masini.addEnd(m);
			poz++;
		}
		fin.close();
	}
	void desplay()
	{
		Nod<Masina>* head = masini.iterator();
		while (head != NULL)
		{
			cout << head->data.afisare() << endl;
			head = head->next;
		}
	}
	bool existenta(Masina m)
	{
		for (int i = 0; i < poz; i++)
		{
			if (m.brand == masini.get(i)->data.brand)
			{
				return true;
			}
		}
		return false;
	}
	bool addMasina(Masina m)
	{
		if (existenta(m) == false)
		{
			masini.addEnd(m);
			return true;
		}
		return false;
	}
	void deleteMasina(Masina m)
	{
		if (existenta(m) == true)
		{
			masini.removePoz(getPosition(m));
			
		}
		
	}

	int getPosition(Masina m)
	{
		Nod<Masina>* head = masini.iterator();
		int ct = 0;
		while (head!=NULL)
		{
			if (head->data.id== m.id)
				return ct;
			ct++;
			head = head->next;
		}
		return 0;
	}

	void updateMasina(Masina m)
	{
		if (existenta(m) == true)
		{
			masini.get(getPosition(m))->data.an=m.an;
			masini.get(getPosition(m))->data.culoare=m.culoare;
			masini.get(getPosition(m))->data.nrlocuri=m.nrlocuri;
			masini.get(getPosition(m))->data.brand=m.brand;
		}
	}
};

