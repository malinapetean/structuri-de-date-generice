#include"Nod.h"

template<typename T>
struct Lista {
private:
	Nod<T>* head = NULL;
public:

	void addEnd(T obj)
	{
		Nod<T>* nou = new Nod<T>();
		nou->data = obj;
		nou->next = NULL;
		if (head == NULL)
		{
			head = nou;
		}
		else
		{
			Nod<T>* x = head;
			while (x->next != NULL)
			{
				x = x->next;
			}
			x->next = nou;
		}
	}
	void addPoz(T obj, int poz)
	{
		int ct = 0;
		if (head == NULL)
		{
			head = new Nod<T>();
			head->data = obj;
			head->next = NULL;
		}
		else
		{
			Nod<T>* aux = head;
			while (ct < poz - 1)
			{
				aux = aux->next;
				ct++;
			}
			Nod<T>* nou = new Nod<T>();
			nou->data = obj;
			nou->next = aux->next;
			aux->next = nou;
		}
	}
	void removePoz(int poz)
	{
		int ct = 0;
		Nod<T>* aux = head;
		while (ct < poz - 1)
		{
			aux = aux->next;
			ct++;
		}
		aux->next = aux->next->next;
	}
	Nod<T>* get(int poz)
	{
		int ct = 0;
		Nod<T>* aux = head;
		while (ct < poz - 1)
		{
			aux = aux->next;
			ct++;
		}
		return aux->next;
	}
	void set(T obj, int poz)
	{
		int ct = 0;
		Nod<T>* aux = head;
		while (ct < poz )
		{
			aux = aux->next;
			ct++;
		}
		aux->data = obj;
		
	}
	Nod<T>* iterator() {

		return head;
	}

	int size()
	{
		int ct = 0;
		Nod<T>* aux = head;
		while (aux != NULL)
		{
			aux = aux->next;
			ct++;
		}
		return ct;
	}
};
