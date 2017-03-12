/*Mettre en oeuvre diff�rentes surcharges op :
-op�rateur +  check
-op�rateur -  check
-op�rateur += check
-op�rateur -= check
-op�rateur /= check
-op�rateur *= check
-op�rateur == check
-op�rateur != check
-op�rateur = //constructeur par recopie et =, diff�rence, obligatoirement une fonction membre.
-op�rateur de cout et cin :
-friend ostream& operator<<(ostream& os, const point& mp); //surcharge cout check
-friend istream& operator>>(istream& is, point& mp); //surchage cin;		check
-op�rateur new
-op�rateur delete
-op�rateur []*/


#include "surchageOp.h"
#include <stdlib.h>

int main() {
	//cr�ation des points a1 et a2 avec leurs abs et ord.
	//cr�ation des points b et c que nous manipulerons
	surchageOp a1(2, 5), a2(2, 5), b, c;
	
	//op�rateur +
	c = a1 + a2;
	c.affiche();

	//op�rateur -
	b = a1 - a2;
	b.affiche();

	//op�rateur +=
	a1 += a2;
	a1.affiche();

	//op�rateur -=
	a1 -= a2;
	a1.affiche();

	//op�rateur /=
	a1 /= a2;
	a1.affiche();

	//op�rateur *=
	a1 *= a2;
	a1.affiche();

	//op�rateur ==
	if (a1==a2)
	{
		cout << "egaux" << endl;
	}
	else
	{
		cout << "pas egaux" << endl;
	}
	//op�rateur !=
	if (a1!=a2)
	{
		cout << "pas egaux" << endl;
	}
	else
	{
		cout << "encore egaux" << endl;
	}

	//op�rateur =
	a1 = a2;
	a1.affiche();

	//op�rateur cout
	cout << a1 << endl;

	//op�rateur cin
	cin >> a1;
	a1.affiche();

	//d�claration et initialisation de la variable h
	surchageOp * h = new surchageOp(30);
	cout << a1.getCount() << endl;

	delete h;
	cout << a1.getCount() << endl;

	//op�rateur []
	cout << a1[1] << endl;

	system("pause");

}