#pragma once
#include "List.h"

List list;

/*#509
Să se ordoneze crescător elementele vectorului.
ex:6
8 2 9 4 5 7 
se va afisa 2 4 5 7 8 9*/
void solutia1() {
	
	int dim = 6;
	int v[100] = { 8, 2 ,9, 4 ,5, 7 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);


	list.crescator(dim);
	list.afisare();

}

/*#633
Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre numărul de valori pare din
șir și numărul de valori impare din șir.
Ex:
5
15 245 28 33 11 se va afisa 3
*/
void solutia2() {


	int dim = 5;
	int v[100] = { 15, 245, 28, 33, 11 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);
	int ctpar = list.ctPar();
	int ctimpar = list.ctImpar();
	if (ctpar > ctimpar)
		cout << ctpar - ctimpar;
	else
		cout << ctimpar - ctpar;

}

/*#4383
Se citește un vector cu n elemente, numere naturale. Să se înlocuiască ultimul element prim din vector cu 0, 
apoi să se afișeze vectorul.
Ex:
5
7 4 9 6 2 se afiseaza 7 4 9 6 0*/
void solutia3() {


	int dim = 5;
	int v[100] = { 7, 4, 9, 6, 2 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.setPoz(list.pozUitlimPrim(dim), 0);
	list.afisare();
}

/*#4382
Se citește un vector cu n elemente, numere naturale. Să se înlocuiască fiecare element prim din vector cu 0, 
apoi să se afișeze vectorul.
Ex:
5
7 4 9 6 2
se va afisa 0 4 9 6 0*/
void solutia4() {

	int dim = 5;
	int v[100] = { 7, 4, 9, 6, 2 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.inlocuirePrim(dim);
	list.afisare();

}

/*#486
Să se determine maximul şi minimul valorilor elementelor unui vector.
Ex:
5
7 4 9 6 2
se va afisa 9 2
*/
void solutia5() {

	int dim = 5;
	int v[100] = { 7, 4, 9, 6, 2 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.maxi(dim) << " " << list.mini(dim);

}

/*#546
Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele din vector care sunt multipli ai ultimului element.
Ex:
5
7 4 9 6 2 se va afisa 4 6 2
*/
void solutia6() {

	int dim = 5;
	int v[100] = { 7, 4, 9, 6, 2 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisareMultipUltim(dim);

}

/*#553
Să se determine indicele maximului şi cel al minimului valorilor elementelor unui vector.
Ex:
5
8 7 9 2 5 se va afisa 3 4
*/
void solutia7() {


	int dim = 5;
	int v[100] = {8, 7, 9, 2, 5 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.pozmaxi(dim)+1 << " " << list.pozmini(dim)+1;

}

/*#547
Se citește un vector cu n elemente, numere naturale. Să se determine câte elemente ale vectorului sunt egale cu 
diferența dintre cea mai mare și cea mai mică valoare din vector.
5
7 7 9 2 4 se va afisa 2
*/
void solutia8() {


	int dim = 5;
	int v[100] = { 7, 7, 9, 2, 4 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	int dif = list.difMaxiMini(dim);

	cout << list.ctEgalDif(dim,dif);
}

/*#490
Se citește un vector cu n elemente, numere naturale distincte. Să se afișeze elementele cuprinse între elementul cu valoarea 
minimă și cel cu valoare maximă din vector, inclusiv acestea.
5
7 9 6 2 8 se va afisa 9 6 2*/
void solutia9() {

	int dim = 5;
	int v[100] = { 7, 9, 6, 2, 8 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisareInterval(dim,list.pozmaxi(dim),list.pozmini(dim));
}

/*#491
Se citește un vector cu n elemente, numere naturale. Să se determine suma valorilor elementelor cuprinse între primul și 
ultimul element par al vectorului, inclusiv acestea.
Ex:
5
7 6 1 2 8
se va afisa 17
*/
void solutia10() {

	int dim = 5;
	int v[100] = { 7, 6, 1, 2, 8 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.sumaInterval(dim, list.primPar(dim), list.ultimPar(dim));
}

/*#487
Se dă un vector cu n numere naturale. Să se determine câte dintre elemente au valoarea strict mai mare decât
media aritmetică a elementelor vectorului.
Ex:
5
5 0 2 1 4 se afiseaza 2
*/
void solutia11() {

	int dim = 5;
	int v[100] = { 5, 0, 2, 1, 4 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctmediaArit(dim);
}

/*#4380
Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector au aceeași cifră zecilor.
Ex:
6
145 207 56 1248 1001 249 se afiseaza 4
*/
void solutia12() {

	int dim = 6;
	int v[100] = { 145, 207, 56, 1248, 1001, 249 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctPerechiCifZeci(dim);
}

/*#499
Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt 
formate din valori cu aceeași sumă a cifrelor.
Ex:
6
51 842 15 28 77 132
se afiseaza 4
*/
void solutia13() {

	int dim = 6;
	int v[100] = { 51, 842, 15, 28, 77, 132 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctPerechiSumEgal(dim);
}

/*#493
Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, cu proprietatea că y[i] este egal
cu restul împărțirii lui x[i] la suma cifrelor lui x[i].
Ex:
6
50 1815 15 289 35 40
se afiseaza 0 0 3 4 3 0
*/
//???????????
void solutia14() {

	int dim = 3;
	int v[100] = { 51, 842, 15, 28, 77, 132 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);


}

/*#495
Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, care să conțină elementele prime 
din x, în ordine inversă.
Ex:
6
50 5 15 29 13 40
 se afiseaza 13 29 5
*/
//?????
void solutia15() {

	int dim = 6;
	int v[100] = { 50, 5, 15, 29 ,13, 40 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);
//	list.afisare();
	List y;

//	y.addPrime();
	y.afisare();
}



