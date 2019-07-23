//============================================================================
// Name        : sarva.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

class poly
{
	float x,y,a,b,c,f,d;
	void get()
	{
		cout<<"enter value of a,b,c";
		cin>>a>>b>>c;
	}
public:
	void root()
	{
		get();
		d=b*b-4*a*c;
		if(d>=0)
		{
			d=sqrt(d);
			x=(-b+d)/(2*a);
			y=(-b-d)/(2*a);
			cout<<"roots are"<<x<<"and"<<y;
		}
		else
		{
			cout<<"roots are imaginary";
		}
	}
	void value()
	{
		get();
        cout<<"enter a value of x";
        cin>>x;
        f=a*x*x+b*x+c;
        cout<<"value of function is"<<f;
	}
	void present()
	{
		get();
		cout<<" the equation is "<<a<<"x^2+"<<b<<"x+"<<c;
	}
	};
int main() {
poly c;
int ch;

cout<<"\n enter 1 for roots \n 2 for function value \n 3 for representation";
cin>>ch;
for(;ch!=4;)
{
switch(ch)
{
case 1:
	c.root();
	break;

case 2:
	c.value();
	break;

case 3:
	c.present();
	break;

}
cout<<"\n enter 1 for roots \n 2 for function value \n 3 for representation \n 4 for exit";
cin>>ch;
}
	return 0;
}
