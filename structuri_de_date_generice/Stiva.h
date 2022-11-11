#include"Nod.h"

//fifo-first in first out
template<typename T>
struct Stiva {
private:
	Nod<T>* head = NULL;
public:
	void push(T obj)
	{
		
		if (head == NULL) {

			head = new Nod<T>();

			head->next = NULL;
			head->data = obj;

		}
		else {

			Nod<T>* nou = new Nod<T>();

			nou->next = head;
			nou->data = obj;
			head = nou;


		}
		
	}
	void pop()
	{
		
		if (head != NULL) {
			head = head->next;
		}
	}

	T peek()
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
};
