#pragma once
#include "Node.h"
#include <math.h>

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

	int maxi(int dim) {
		Node* aux = head;
		int maxi = -1;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() > maxi)
				maxi = aux->getData();

			aux = aux->getNext();
		}

		return maxi;
	}

	int mini(int dim) {
		Node* aux = head;
		int mini = 99999;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() < mini)
				mini = aux->getData();

			aux = aux->getNext();
		}

		return mini;
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

	void inlocuirePrim(int dim) {

		Node* aux = head;

		for (int i = 0; i < dim; i++) {

			if (prim(aux->getData()))
				setPoz(i, 0);

			aux = aux->getNext();
		}



	}

	void afisareMultipUltim(int dim) {


		Node* aux = head;
		Node* ultim = head;

		while (ultim->getNext() != NULL)
		{
			ultim = ultim->getNext();
		}

		int nrUltim = ultim->getData();

		while (aux != NULL)
		{
			if (aux->getData() % nrUltim == 0)
				cout << aux->getData() << " ";
			aux = aux->getNext();
		}

	}

	int pozmaxi(int dim) {
		Node* aux = head;
		int maxi = -1;
		int poz = 0;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() > maxi){ 
				maxi = aux->getData();
				poz = i;
			}

			aux = aux->getNext();
		}

		return poz;
	}

	int pozmini(int dim) {
		Node* aux = head;
		int mini = 99999;
		int poz = 0;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() < mini) {
				mini = aux->getData();
				poz = i;
			}

			aux = aux->getNext();
		}

		return poz;
	}

	int difMaxiMini(int dim) {
	
		return maxi(dim) - mini(dim);
	}

	int ctEgalDif(int dim, int dif) {

		Node* aux = head;
		int ct = 0;
		for (int i = 0; i < dim; i++) {

			if (aux->getData() == dif)
				ct++;

			aux = aux->getNext();
		}

		return ct;

	}

	void afisareInterval(int dim, int pozMaxi, int pozMini) {

		Node* aux = head;

		for (int i = 0; i < dim; i++) {

			if (pozMaxi > pozMini) {
				int aux = pozMaxi;
				pozMaxi = pozMini;
				pozMini = aux;
			}
			if (i >= pozMaxi && i <= pozMini)
				cout << aux->getData() << " ";
			aux = aux->getNext();
		}

	}

	int primPar(int dim) {

		Node* aux = head;
		int poz = 0;
		for (int i = 0; i < dim; i++) {

			if (aux->getData() % 2 == 0) {
				poz = i;
				return poz;
			}


			aux = aux->getNext();
		}

		return -1;
	}

	int ultimPar(int dim) {

		Node* aux = head;
		int poz = 0;
		for (int i = 0; i < dim; i++) {

			if (aux->getData()%2==0)
				poz = i;

			aux = aux->getNext();
		}

		return poz;
	}

	int sumaInterval(int dim, int primPar, int ultimPar) {


		Node* aux = head;
		int s = 0;
		for (int i = 0; i < dim; i++) {

			if (i >= primPar && i <= ultimPar)
				s += aux->getData();

			aux = aux->getNext();
		}

		return s;
	}

	int mediaAritmetica(int dim) {

		Node* aux = head;

		int s=0;
		
		for (int i = 0; i < dim; i++) {
			s += aux->getData();
			aux = aux->getNext();
		}

		return s / size();
	}

	int ctmediaArit(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			if (mediaAritmetica(dim) < aux->getData())
				ct++;

			aux = aux->getNext();
		}

		return ct;

	}

	void nextI(int i, Node* aux) {

		int ct = 0;
		
		while (ct<i)
		{
			aux = aux->getNext();
			ct++;
		}

	}

	int ctPerechiCifZeci(int dim) {

		Node* aux = head;
		Node* nou = head;
		int ct = 0;

		for (int i = 0; i < dim; i++) {
			nou = head;
				nextI(i+1, nou);

				for (int j = 0; j < dim; j++) {

					if ((nou->getData() != aux->getData()) && ((nou->getData() / 10) % 10 == (aux->getData() / 10) % 10)) {
						ct++;
					}

					if (nou->getNext() == NULL) {
						j = dim;
						break;
					}
					nou = nou->getNext();
				}

			aux = aux->getNext();
		}

		return ct/2;


	}

	int sumaCif(int nr) {

		int s = 0;

		while (nr!=0)
		{
			int c = nr % 10;
			s += c;
			nr /= 10;
		}

		return s;
	}

	int ctPerechiSumEgal(int dim) {

		Node* aux = head;
		Node* nou = head;
		int ct = 0;

		for (int i = 0; i < dim; i++) {
			nou = head;
			nextI(i + 1, nou);

			for (int j = 0; j < dim; j++) {

				if ((nou->getData() != aux->getData()) && (sumaCif(nou->getData()) == sumaCif(aux->getData()))) {
					ct++;
				}

				if (nou->getNext() == NULL) {
					j = dim;
					break;
				}
				nou = nou->getNext();
			}

			aux = aux->getNext();
		}

		return ct / 2;


	}

	/*void addPrime() {

		Node* x = head;
		Node* nou = head;
		int dim = 0;

		while (x != NULL)
		{
			if (prim(x->getData())) {
			

				if (nou == NULL) {

					nou = new Node();

					nou->setNext(NULL);
					nou->setData(x->getData());
				}
				else {
					Node* nou1 = new Node();
					nou1->setNext(nou);
					nou1->setData(x->getData());
					nou = nou1;

				}


			}



			dim++;
			x = x->getNext();
		}



	}*/

	int mediaAritNenule(int dim) {

		Node* aux = head;

		int s = 0;
		int ct = 0;

		for (int i = 0; i < dim; i++) {
			if (aux->getData() != 0) {
				ct++;
				s += aux->getData();
			}

			aux = aux->getNext();
		}
	

		return s / ct;
	}

	int getUltimulNr(int dim) {

		Node* aux = head;

		for (int i = 0; i < dim - 1; i++)
			aux = aux->getNext();

		return aux->getData();
	}

	int ctIntervalAfara(int dim) {

		Node* aux = head;

		int ct = 0;
		int ultim = getUltimulNr(dim);
		int primul = aux->getData();
		for (int i = 0; i < dim; i++) {
			if (aux->getData() < primul && aux->getData() > ultim)
				ct++;

			aux=aux->getNext();
		}

		return ct;
	}

	void InlocNule(int dim) {

		Node* aux = head;

		for (int i = 0; i < dim; i++) {

			if (aux->getData() == 0) {
				setPoz(i, mediaAritNenule(dim));
			}

			aux = aux->getNext();
		}

	}

	int divizorComun(int n, int m) {

		while (m != 0)
		{
			int r = n % m;
			n = m;
			m = r;
		}

		return n;
	}

	int ctPerechiPrime(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			int n, m;
			n = aux->getData();
			Node* nou = head;
			for (int j = 0; j < dim; j++) {
				m = nou->getData();
				if (divizorComun(n, m) == 1) ct++;
				nou = nou->getNext();
			}

			aux = aux->getNext();
		}

		return ct/2;
	}

	int ctPerechiPrimeUltim(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			int n, m;
			n = aux->getData();
			m = getUltimulNr(dim);
			if (divizorComun(n, m) == 1) ct++;

			aux = aux->getNext();
		}

		return ct;

	}

	int ctCifra(int dim, int nr) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			if (aux->getData() == nr)
				ct++;

			aux = aux->getNext();
		}

		return ct;
	}

	int ctEgalUiltim(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			if (aux->getData() == getUltimulNr(dim))
				ct++;

			aux = aux->getNext();
		}

		return ct;

	}

	int ctNrPrime(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			if (prim(aux->getData()))
				ct++;

			aux = aux->getNext();
		}

		return ct;


	}

	int ctNr(int nr) {
		int ct = 0;
		while (nr!=0)
		{
			ct++;
			nr /= 10;
		}
		return ct;
	}

	bool verifPatratPerfect(int nr) {

		int ctnr = ctNr(nr);
		if (ctnr > 2) {
			nr = nr / pow(10, ctnr - 2);
		}
		
		if (sqrt(nr) == (int)sqrt(nr)) 
			return true;
		
		return false;
	}

	void afisarePatratPerf(int dim) {

		Node* aux = head;

		int ct = 0;

		for (int i = 0; i < dim; i++) {
			if (verifPatratPerfect(aux->getData()))
				cout << aux->getData() << " ";
				

			aux = aux->getNext();
		}


	}

	void afisareSumele(int dim) {

		int ct = dim;
		while (ct >= 1)
		{

			Node* aux = head;
			int s = 0;
			for (int i = 0; i < ct; i++) {

				s += aux->getData();
				aux = aux->getNext();
			}
			cout << s << endl;

			ct--;
		}
		



	}

	int primulNr() {
	
		return head->getData();
	}

	int pozPrimaCif(int dim, int nr) {

		Node* aux = head;

		int poz = 0;

		for (int i = 0; i < dim; i++) {
			if (aux->getData() == nr )
				poz = i+1;
			


			aux = aux->getNext();
		}

		return poz;	
	}

};



















