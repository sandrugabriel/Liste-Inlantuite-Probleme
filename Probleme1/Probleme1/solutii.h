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





