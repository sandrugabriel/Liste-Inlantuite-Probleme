﻿#pragma once
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

/*#986
Se dă un șir cu n elemente, numere reale. Să se determine câte dintre elemente se află în afara intervalului închis 
determinat de primul și ultimul element.
Ex:
6
2 0 4 -1 -8 -3 se afiseaza 2
*/
void solutia16() {

	int dim = 6;
	int v[100] = { 2, 0, 4, -1, -8, -3 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctIntervalAfara(dim);
}

/*#498
Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt prime între ele.
Ex:
6
51 18 15 28 77 121 se afiseaza 9
*/
void solutia17() {

	int dim = 6;
	int v[100] = { 51, 18, 15, 28, 77, 121 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctPerechiPrime(dim);

}

/*#496
Se dă un vector cu n numere naturale. Să se determine câte dintre elementele vectorului sunt prime cu ultimul element.
Ex:
6
50 64 15 28 35 75 se afiseaza 2
*/
void solutia18() {

	int dim = 6;
	int v[100] = { 50, 64, 15, 28, 35, 75 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctPerechiPrimeUltim(dim);
}

/*#161
* Se dă un vector cu n elemente, numere naturale. Să se înlocuiască toate elementele nule din vector cu partea întreagă 
a mediei aritmetice a elementelor nenule din vector.
Ex:
5
0 2 0 4 5
se afiseaza 3 2 3 4 5
*/
void solutia19() {

	int dim = 5;
	int v[100] = { 0, 2, 0 ,4 ,5 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.InlocNule(dim);
	list.afisare();
}

/*#98
Se dă un șir cu n elemente numere naturale. Să se determine valoarea maximă din șir și de câte ori apare.
Ex:
5
5 3 2 4 5 se afiseaza 5 2
*/
void solutia20() {

	int dim = 5;
	int v[100] = { 5, 3 ,2, 4 ,5 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.maxi(dim) << " " << list.ctCifra(dim, list.maxi(dim));
}

/*#99
Se dă un șir cu n elemente numere naturale. Să se determine câte elemente din şir sunt egale cu ultimul element al acestuia.
Ex:5
5 3 2 4 5
se afiseaza 2
*/
void solutia21() {

	int dim = 5;
	int v[100] = { 5, 3 ,2, 4 ,5 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctEgalUiltim(dim);
}

/*#100
Se dă un șir cu n elemente numere naturale. Să se determine câte elemente din şir sunt numere prime.
Ex:
5
25 17 2 10 13
se afiseaza 3
*/
void solutia22() {

	int dim = 5;
	int v[100] = { 25, 17, 2, 10, 13 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctNrPrime(dim);
}

/*#132
Să se afișeze elementele din șir care au proprietatea că primele două cifre din scrierea zecimală formează un pătrat perfect.
Ex:
5
253 16 225 100 3678
se afiseaza 253 16 3678
*/
void solutia23() {

	int dim = 5;
	int v[100] = { 253, 16, 225 ,100, 3678 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisarePatratPerf(dim);
}

/*#237
Se dă un şir cu n numere naturale. Să se afişeze suma primilor n termeni din şir, apoi suma 
primilor n-1 termeni din şir, şi aşa mai departe.
Ex:
4
1 7 3 4
se afiseaza 
15
11
8
1
*/
void solutia24() {

	int dim = 4;
	int v[100] = { 1, 7, 3, 4 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisareSumele(dim);

}

/*#248
Se dă un şir cu n numere naturale distincte două câte două. Să se determine poziţia pe care s-ar afla 
primul element al şirului în şirul sortat.
Ex:
6
267 13 45 628 7 79
se afiseaza 5
*/
void solutia25() {

	int dim = 6;
	int v[100] = { 267, 13, 45, 628, 7, 79 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	int nr = list.primulNr();
	list.crescator(dim);
	cout << list.pozPrimaCif(dim,nr);
}

/*#1550
Se da un vector cu n elemente. Sa se afișeze pe ecran elementele din vector care divid factorialul numărului de elemente n.
Ex:
5
16 3 71 30 25
se afiseaza 3 30
*/
void solutia26() {

	int dim = 5;
	int v[100] = { 16, 3, 71, 30, 25 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisareFactorial(dim);
}

/*#2375
  Să se afișeze numerele palindrom din fișier în ordinea primul, ultimul, al doilea, penultimul etc.
Ex:
8
11 21 303 4114 51 66 75 808
se afiseaza 11 808 303 66 4114   */
void solutia27() {

	int dim = 8;
	int v[100] = { 11, 21, 303, 4114 ,51, 66, 75, 808 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	list.afisarePelindrom(dim);
}

/*#2322
Într-un ținut îndepărtat cu peisaje de poveste pacea domnește peste întreg ținutul deoarece lumea are absolut tot ce îi trebuie.
Moș Crăciun însa dorește să le mai aducă zâmbetul pe buze și de aceea a decis să ducă fiecărei case câte o sticlă de șampanie 
deoarece deși oamenii de aici au bani, nu au magazine de unde să cumpere. Însă din păcate Moș Crăciun este bătrân și nu
poate transporta prea multe sticle așa că decide să distribuie câte o sticla de șampanie la fiecare două case. Pentru
simplitate Moș Crăciun a făcut o hartă a caselor în care o casă este notată cu 1 și pământul gol cu 0. Moș Crăciun însă
nu prea le are cu programarea și de aceea vă roagă să îl ajutați!
Scrieți un program care primind harta caselor afișează câte sticle de șampanie trebuie să aducă Moș Crăciun.
Ex:
7
1 0 0 1 0 1 1
se afiseaza 6
*/
void solutia28() {

	int dim = 7;
	int v[100] = { 1, 0, 0, 1 ,0, 1, 1 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.ctPerechiUnu(dim);
}

/*#2404
Exact așa cum spuneam Alex e un băiat năzdrăvan! De data aceasta boacăna pe care a făcut-o l-a determinat pe 
profesorul de informatică să îi spună că nu va mai fi iertat și pentru această boacănă așa că îi dă de ales ori 
îl va asculta doar pe el și restul copiilor vor scăpa ori va dă test tuturor din clasă. Alex este conștient că
nu trebuie să fie pedepsiți toți pentru greșeala lui așa ca decide ca doar el trebuie să răspundă! Profesorul
complet degajat îi da problema:
Se dau două șiruri de câte n valori notate A și B. Pentru fiecare pereche AiBi
 se calculează resturile împărțirii la 6669666 a lui AiBi
. Ajutați-l pe Alex să determine suma acestor resturi.
Ex:
5
2 3 4 5 6
1 2 3 4 5
se afiseaza 8476
*/
//?????????????????????????

/*#
Moş Crăciun s-a dus la Polul Nord Shopping City să cumpere n cadouri pentru copiii din întreaga lume. 
Fiecare cadou avea un cod de bare pentru identificarea produsului, corespunzător unui număr format din nouă cifre, 
prima cifră fiind nenulă. La plecare şi-a amintit că-i promisese unui copil isteţ un cadou special, care să fie 
diferit de toate celelalte. Moş Crăciun vă roagă să găsiţi un cadou care să aibă codul de bare diferit de toate celelalte.
Ex:
4
123456789 987654321 112345567 200000001
se afiseaza 412345678
*/
void solutia30() {

	int dim = 4;
	int v[100] = { 123456789, 987654321 ,112345567, 200000001 };
	for (int i = 0; i < dim; i++)
		list.addEnd(v[i]);

	cout << list.generareNrDiferit(dim);
}


