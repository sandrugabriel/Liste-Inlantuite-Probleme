#pragma once
#include "Node.h"

using namespace std;


struct List
{


private:
	Node* head = NULL;
public:

	void addStart(int  nr) {


		if (head == NULL) {

			head = new Node();

			head->setNext(NULL);
			head->setData(nr);
		}
		else {
			Node* nou = new Node();
			nou->setNext(head);
			nou->setData(nr);
			head = nou;

		}

	}

	Node* getHead() {
		return head;
	}

	void afisare() {


		Node* aux = head;


		while (aux != NULL)
		{

			cout << aux->getData()<<" ";
			aux = aux->getNext();
		}

	}

	void addEnd(int nr) {

		if (head == NULL) {

			head = new Node();

			head->setNext(NULL);
			head->setData(nr);
		}
		else {


			Node* aux = head;

			while (aux->getNext() != NULL) {

				aux = aux->getNext();
			}


			Node* nou = new Node();

			nou->setNext(NULL);
			nou->setData(nr);
			aux->setNext(nou);

		}


	}

	void addPoz(int nr, int poz) {


		if (head == NULL) {

			head = new Node();

			head->setNext(NULL);
			head->setData(nr);
		}
		else
		{

			Node* aux = head;

			int ct = 0;

			if (poz == 0) {
				addStart(nr);
				return;
			}

			while (ct < poz - 1)
			{

				aux = aux->getNext();
				ct++;
			}

			if (aux->getNext() == NULL) {

				addEnd(nr);
				return;
			}

			Node* nou = new Node();
			nou->setNext(aux->getNext());
			nou->setData(nr);
			aux->setNext(nou);

		}


	}

	void stergereaPrimElement() {

		head = head->getNext();

	}

	void stergereUltim() {

		Node* aux = head;

		while (aux->getNext()->getNext() != NULL)
		{
			aux = aux->getNext();
		}

		aux->setNext(NULL);

	}

	void stergerePoz(int poz) {

		Node* aux = head;

		int ct = 0;

		if (poz == 0) {
			stergereaPrimElement();
			return;
		}

		while (ct < poz - 1)
		{
			aux = aux->getNext();
			ct++;
		}

		if (aux->getNext() == NULL) {
			stergereUltim();
			return;
		}

		aux->setNext(aux->getNext()->getNext());

	}

	int size() {

		Node* aux = head;
		int ct = 0;
		while (aux->getNext() != NULL)
		{
			aux = aux->getNext();
			ct++;
		}

		return ct + 1;
	}

	void setPoz(int poz, int nr) {
		Node* aux = head;
		int ct = 0;
		while (ct < poz)
		{
			aux = aux->getNext();
			ct++;
		}

		aux->setData(nr);


	}

	int getPoz(int poz) {

		Node* aux = head;

		int ct = 0;

		while (ct < poz)
		{
			aux = aux->getNext();
			ct++;
		}

		return aux->getData();
	}

	void crescator(int dim) {

		Node* head1 = head;

		int semn = 1;

		do {
			semn = 1;
			head1 = head;
			for (int i = 0; i < dim - 1; i++) {

				if (head1->getData() > head1->getNext()->getData()) {

					int aux = getPoz(i);
					setPoz(i, getPoz(i + 1));
					setPoz(i + 1, aux);
					semn = 0;
				}

				head1 = head1->getNext();
			}

		} while (semn == 0);



	}

	int maxiPret(int dim) {
		Node* aux = head;
		int maxi = -1;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() > maxi)
				maxi = aux->getData();

			aux = aux->getNext();
		}

		return maxi;
	}

	int ctPar() {

		Node* aux = head;
		int ct = 0;

		if (aux->getData() % 2 == 0)
			ct++;

		while (aux->getNext() != NULL)
		{
			if (aux->getNext()->getData() % 2 == 0)
				ct++;

			aux = aux->getNext();

		}

		return ct;
	}

	int ctImpar() {

		Node* aux = head;
		int ct = 0;

		if (aux->getData() % 2 != 0)
			ct++;

		while (aux->getNext() != NULL)
		{
			if (aux->getNext()->getData() % 2 != 0)
				ct++;

			aux = aux->getNext();

		}

		return ct;
	}

	bool prim(int nr) {

		if (nr == 0 || nr == 1)
			return false;

		for (int i = 2; i <= nr / 2; i++)
			if (nr % i == 0)
				return false;

		return true;
	}

	int pozUitlimPrim(int dim) {

		Node* aux = head;
		int poz = 0;
		for (int i = 0; i < dim; i++) {

			if (prim(aux->getData()))
				poz = i;

			aux = aux->getNext();
		}

		return poz;
	}

};



















