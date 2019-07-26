//============================================================================
// Name        : Assach.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

class Student
{
	int age,income,tyre;
	string city;
public:
	int geta()
	{
		cout <<"\n Enter age";
		cin >>age;
		return age;
	}
	int geti()
		{
			cout <<"\n Enter income";
			cin >>income;
			return income;
		}
	int gett()
		{
			cout <<"\n Enter tire";
			cin >>tyre;
			return tyre;
		}
	string getc()
		{
			cout <<"\nEnter city";
			cin >>city;
			return city;
		}

};

int main()
{
	Student s;
int k;
try{
do{
	cout<<"\n Enter 1 for age \n 2 for income \n 3 for tire \n 4 for city \n 5 to exit ";
	cin>>k;

	switch(k)
	{
	case 1:
		int a;
		a=s.geta();
		if(18<a && a<55)
		{
			cout<<a;
		}
		else
		{
			throw a;
		}
		break;

	case 2:
		int i;
		i=s.geti();
		if(50000<i && i<100000)
				{
					cout<<i;
				}
				else
				{
					throw i;
				}
		break;
	case 3:
		int t;
		t=s.gett();
		if(t==4)
				{
					cout<<t;
				}
				else
				{
					throw t;
				}
		break;
	case 4:
	string c;
			 c=s.getc();
	 if(c=="Pune" || c=="Mumbai" || c=="Banglore" || c=="Chennai")
	 		{
	 			cout<<c;
	 		}
	 		else
	 		{
	 			throw c;
	 		}
       break;

	}

}while(k!=5);
}
catch(int x)
{
	cout <<"Error Occured";
	}
catch(string &c )
{
	cout <<"Error Occured";
	}

	return 0;
}
