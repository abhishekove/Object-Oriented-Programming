//============================================================================
// Name        : Complex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
public:
	int r,c;

	Complex()
{
		r=0;
		c=0;
		}

	void get()
	{
		cout <<"enter real and imaginary numbers"<<"\n";
		cin >>r>>c;
	}
	void display()
	{
		cout <<"real is"<<r<<"\n"<<"imaginary is"<<c<<"\n";
	}
	Complex operator +(Complex x)
	{
		Complex y;
		y.r=r+x.r;
		y.c=c+x.c;
	return y;
	}
	Complex operator -(Complex x)
		{
			Complex y;
			y.r=r-x.r;
			y.c=c-x.c;
		return y;
		}
	Complex operator *(Complex x)
		{
			Complex y;
			y.r=(r*x.r)-(c*x.c);
			y.c=(r*x.c)+(c*x.r);
		return y;
		}

	};
int main() {
	Complex a,b,d;
	int i;
	a.get();
	b.get();
	do{
		cout <<"Enter 1 to add \n 2to subtract \n 3 to multiply \n 4 to update \n 5 to display \n 6 to exit"<<"\n";
		cin >>i;
		switch(i)
		{
		case 1:
			d=a+b;
			d.display();
			break;
		case 2:
			d=a-b;
			d.display();
			break;
		case 3:
			d=a*b;
			d.display();
			break;
		case 4:
			a.get();
			b.get();
			break;
		case 5:
			a.display();
			b.display();
			break;

		default:
			i=0;
			break;
		}
	}while(i!=0);
	return 0;
}
