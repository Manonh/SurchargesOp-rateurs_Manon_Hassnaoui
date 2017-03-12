#include "surchageOp.h"

int Count = 0;

surchageOp::~surchageOp()
{
}

//BUT: fonction qui surcharge l'op +  
//ENTREE: un point
//SORTIE: somme de l'abscisse et de l'ordonn�e
surchageOp surchageOp::operator+(surchageOp x) const
{
	surchageOp p;

	p.a = a + x.a;
	p.b = b + x.b;
	return p;
}

//BUT:fonction qui surcharge l'op -
//ENTREE: un point
//SORTIE: r�sultat de la soustraction de l'abscisse et de l'ordonn�e
surchageOp surchageOp::operator-(surchageOp x) const
{
	surchageOp p;
	p.a = a - x.a;
	p.b = b - x.b;
	return p;
}

//BUT:fonction qui surcharge l'op +=
//ENTREE: un pointeur
//SORTIE: somme de l'abscisse, de l'ordonn�e et du pointeur en param�tre
surchageOp surchageOp::operator+=(surchageOp &x)
{
	this->a += x.a;
	this->b += x.b;

	return *this;
}

//BUT:fonction qui surcharge l'op -=
//ENTREE: un pointeur
//SORTIE: r�sultat de la soustraction de l'abscisse, de l'ordonn�e et du pointeur
surchageOp surchageOp::operator-=(surchageOp &x)
{
	this->a -= x.a;
	this-> b-= x.b;

	return *this;
}

//BUT:fonction qui surcharge l'op /=
//ENTREE: un pointeur
//SORTIE: r�sultat de la division de l'abscisse, de l'ordonn�e et du pointeur
surchageOp surchageOp::operator/=(surchageOp & x)
{
	this->a /= x.a;
	this->b /= x.b;

	return *this;
}

//BUT:fonction qui surcharge l'op *=
//ENTREE:un pointeur
//SORTIE:r�sultat de la multiplication de l'abscisse, de l'ordonn�e et du pointeur
surchageOp surchageOp::operator*=(surchageOp & x)
{
	this->a *= x.a;
	this->b *= x.b;

	return *this;

}

//BUT:fonction qui surcharge l'op ==
//ENTREE:un pointeur
//SORTIE: retourne vrai si l'abscisse et l'ordonn�e de 2 points sont �gales
bool surchageOp::operator==(surchageOp & x)
{
	if ((this->a == x.a) && (this->b == x.b) )
	{
	return true;
	}
	else
	{
	return false;
	}

}

//BUT:fonction qui surcharge op !=
//ENTREE:un pointeur
//SORTIE:retourne vrai si l'abscisse ou l'ordonn�e de 2 points ne sont pas �gales
bool surchageOp::operator!=(surchageOp & x)
{
	if ((this->a != x.a) || (this->b != x.b))
	{
	return true;
	}
	else
	{
	return false;
	}

}

//BUT:fonction qui surchage l'op =
//ENTREE: un point
//SORTIE: le point prend la valeur de l'abscisse et de l'ordonn�e de l'autre point
surchageOp surchageOp::operator=(surchageOp x)
{
	this->a = x.a;
	this->b = x.b;
	return *this;
}

//BUT:surcharge de l'op cout
//ENTREE: un pointeur de type ostream et un pointeur de type surchageOp->ma classe
//SORTIE: affiche les coordonn�es d'un point
ostream & operator<<(ostream & os, const surchageOp & mp)
{
	// TODO: ins�rer une instruction return ici
	os <<"(" << mp.a <<","<< mp.b <<")";
	return os;
}

//BUT:surcharge de l'op cin
//ENTREE:un pointeur de type istream et un pointeur de type surchageOp->ma classe
//SORTIE:rentrer des nouvelles coordonn�es � un point
istream & operator>>(istream & is, surchageOp & mp)
{
	// TODO: ins�rer une instruction return ici
	double x, y;

	cout << "Nouvelle valeur de l'abscisse de a1:" << endl;
	is >> x;
	mp.a = x;

	cout << "Nouvelle valeur de l'ordonnee de a1:" << endl;
	is >> y;
	mp.b = y;

	return is;
}
	
//BUT:surcharge de l'op new
//ENTREE:une var de type size_t
//SORTIE:allouer de la m�moire 
void* surchageOp::operator new(size_t x)
{
	void *ptr = malloc(x);
	Count += 1;
	return ptr;
}

//BUT:surcharge de l'op delete
//ENTREE:un pointeur
//SORTIE:lib�re la m�moire allou�e au-dessus
void surchageOp::operator delete(void * x)
{
	Count -= 1;
	free(x);
}

//BUT:r�cup�rer Count
//ENTREE:rien/nothing/nada/nichts
//SORTIE:Count
int surchageOp::getCount() const
{
	return Count;
}

//BUT:surcharge de l'op []
//ENTREE:var de type int
//SORTIE:la donn�e membre correspondant � l'index
int surchageOp::operator[](int index)
{
	switch(index)
	{
		case 0: 
			return a;
			break;
		case 1:
			return b;
			break;
		default:
			return 0;
			break;
	}
}

