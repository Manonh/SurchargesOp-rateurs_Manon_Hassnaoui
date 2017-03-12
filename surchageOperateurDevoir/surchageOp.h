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

	//surd�finition op+ avec une fonction membre
	surchageOp operator+(surchageOp x)const;

	//surd�finition op- avec une fonction membre
	surchageOp operator-(surchageOp x)const;

	//surd�finition op+= avec une fonction membre
	surchageOp operator+=(surchageOp &x);

	//surd�finition op-= avec une fonction membre
	surchageOp operator-=(surchageOp &x);

	//surd�finition op/= avec une fonction membre
	surchageOp operator/=(surchageOp &x);

	//sur�finition op*= avec une fonction membre
	surchageOp operator*=(surchageOp &x);

	//surd�finition op== avec une fonction membre
	bool operator==(surchageOp &x);

	//surd�finition op!= avec une fonction membre
	bool operator!=(surchageOp &x);

	//surd�finition op= avec une fonction membre
	surchageOp operator=(surchageOp x);

	//surd�finition op cout avec une fonction amie
	friend ostream& operator<<(ostream& os, const surchageOp& mp);

	//surd�finition op cin avec une fonction amie
	friend istream& operator>>(istream& is, surchageOp& mp);

	//surd�finition op new avec une fonction membre
	void* operator new(size_t x);

	//surd�finition op delete avec une fonction membre
	void operator delete(void * x);
	

	//surd�finition op[] avec une fonction membre
	int operator[](int index);

	int getCount() const;
};
	

