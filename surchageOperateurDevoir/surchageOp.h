#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

class surchageOp
{
	int a,b;
	int *ptr1;
public:
	~surchageOp();

	//constructeur
	surchageOp(int abs = 0, int ord = 0)
	{
		a = abs;
		b = ord;
	}

	//constructeur par recopie
	surchageOp(const surchageOp &source)
	{
		a = source.a;
		b = source.b;
	}

	void affiche()const
	{
		cout << "Coordonnees :  " << a << " " << b << "\n";
	}

	//surdéfinition op+ avec une fonction membre
	surchageOp operator+(surchageOp x)const;

	//surdéfinition op- avec une fonction membre
	surchageOp operator-(surchageOp x)const;

	//surdéfinition op+= avec une fonction membre
	surchageOp operator+=(surchageOp &x);

	//surdéfinition op-= avec une fonction membre
	surchageOp operator-=(surchageOp &x);

	//surdéfinition op/= avec une fonction membre
	surchageOp operator/=(surchageOp &x);

	//suréfinition op*= avec une fonction membre
	surchageOp operator*=(surchageOp &x);

	//surdéfinition op== avec une fonction membre
	bool operator==(surchageOp &x);

	//surdéfinition op!= avec une fonction membre
	bool operator!=(surchageOp &x);

	//surdéfinition op= avec une fonction membre
	surchageOp operator=(surchageOp x);

	//surdéfinition op cout avec une fonction amie
	friend ostream& operator<<(ostream& os, const surchageOp& mp);

	//surdéfinition op cin avec une fonction amie
	friend istream& operator>>(istream& is, surchageOp& mp);

	//surdéfinition op new avec une fonction membre
	void* operator new(size_t x);

	//surdéfinition op delete avec une fonction membre
	void operator delete(void * x);
	

	//surdéfinition op[] avec une fonction membre
	int operator[](int index);

	int getCount() const;
};
	

