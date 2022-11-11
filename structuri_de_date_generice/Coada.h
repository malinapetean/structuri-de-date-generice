#include"Nod.h"

//lifo-last in first out
template<typename T>
struct Coada {
private:
	Nod<T>* head = NULL;
public:
	void push(T obj)
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
	void pop()
	{
		if (head != NULL) {
			head = head->next;
		}
	}
	T front()
	{
		return head->data;
	}
	bool isEmpty()
	{
		Nod<T>* aux = head;
		if (head == NULL)
			return true;
		else
			return false;
	}
	int size()
	{
		int s = 0;
		Nod<T>* aux = head;
		while (aux != NULL)
		{
			aux = aux->next;
			s++;
		}
		return s;
	}
};