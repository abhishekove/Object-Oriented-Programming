//============================================================================
// Name        : Typecasting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class B
{
public:
	int cm,mm;
	void get()
	{
		cout<<"Enter the distance in mm";
		cin>>mm;
		sort();
	}
	void sort()
	{
		cm=mm/10;
				mm=mm-(cm*10);
	}
	};
class A
{
public:
	int km,m;
	A()
	{
		km=0;m=0;
	}
	void get()
	{
		cout <<"enter distance in m";
		cin>>m;
	     sort();
	}
	void sort()
	{
		km=m/1000+km;
			m=m-(km*1000);
	}
   void	display()
   {
	   cout <<km<<" "<<m;
   }
	void operator = (B b)
	{
		m=(((b.cm*10)+b.mm)/1000)+m;
		sort();
	}
	};
int main() {
	A a;
	B b;
	a.get();
	b.get();
	a=b;
	a.display();

	return 0;
}
