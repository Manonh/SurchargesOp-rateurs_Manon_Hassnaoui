/*Mettre en oeuvre différentes surcharges op :
-opérateur +  check
-opérateur -  check
-opérateur += check
-opérateur -= check
-opérateur /= check
-opérateur *= check
-opérateur == check
-opérateur != check
-opérateur = //constructeur par recopie et =, différence, obligatoirement une fonction membre.
-opérateur de cout et cin :
-friend ostream& operator<<(ostream& os, const point& mp); //surcharge cout check
-friend istream& operator>>(istream& is, point& mp); //surchage cin;		check
-opérateur new
-opérateur delete
-opérateur []*/


#include "surchageOp.h"
#include <stdlib.h>

int main() {
	//création des points a1 et a2 avec leurs abs et ord.
	//création des points b et c que nous manipulerons
	surchageOp a1(2, 5), a2(2, 5), b, c;
	
	//opérateur +
	c = a1 + a2;
	c.affiche();

	//opérateur -
	b = a1 - a2;
	b.affiche();

	//opérateur +=
	a1 += a2;
	a1.affiche();

	//opérateur -=
	a1 -= a2;
	a1.affiche();

	//opérateur /=
	a1 /= a2;
	a1.affiche();

	//opérateur *=
	a1 *= a2;
	a1.affiche();

	//opérateur ==
	if (a1==a2)
	{
		cout << "egaux" << endl;
	}
	else
	{
		cout << "pas egaux" << endl;
	}
	//opérateur !=
	if (a1!=a2)
	{
		cout << "pas egaux" << endl;
	}
	else
	{
		cout << "encore egaux" << endl;
	}

	//opérateur =
	a1 = a2;
	a1.affiche();

	//opérateur cout
	cout << a1 << endl;

	//opérateur cin
	cin >> a1;
	a1.affiche();

	//déclaration et initialisation de la variable h
	surchageOp * h = new surchageOp(30);
	cout << a1.getCount() << endl;

	delete h;
	cout << a1.getCount() << endl;

	//opérateur []
	cout << a1[1] << endl;

	system("pause");

}