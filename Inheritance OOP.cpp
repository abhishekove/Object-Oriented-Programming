//============================================================================
// Name        : Inheritance.cpp
// Author      : smh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

class Personal
{
	char add[20],gender;
	int age;
public:
	char name[20];
	void getp()
	{
		cout<<"Enter name  gender and age";
		cin>>name>>gender>>age;
	}
	void displayp()
	{
		cout<<name<<"\n"<<gender<<"\n"<<age<<"\n";
	}
	};
class Professional
{
	int sal,exp;
	char company[20];
public:
	void getpr()
	{
		cout<<"Enter salary and no of exp and previous company name";
		cin>>sal>>exp>>company;
	}
	void displaypr()
	{
		cout<<sal<<"\n"<<exp<<"\n"<<company<<"\n";
	}
	};
class Academic
{
	int ten,twl;
	char stream[20];
public:
	void geta()
	{
		cout<<"Enter ten marks and twelfth marks and stream in which you studied";
		cin>>ten>>twl>>stream;
	}
	void displaya()
	{
		cout<<ten<<"\n"<<twl<<"\n"<<stream<<"\n";
	}

	};
class biodata:public Personal,public Professional,public Academic
{
public:
	void getall()
	{
		getp();
		getpr();
		geta();
	}
	void displayall()
	{
		displayp();
		displaypr();
		displaya();
	}
	};
int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int n,k;
	cout<<"Enter no of employee in your office";
	cin>>n;
	biodata employee[n];
	for(int i=0;i<n;i++)
	{
		employee[i].getall();
	}
	do{
		cout<<"Enter 1 to get all data \n 2 to update all data \n  3 to get data of specific person \n 4 to update data of specific person \n 5 to exit";
		cin>>k;
		switch(k)
		{
		case 1:
			for(int i=0;i<n;i++)
			{
				employee[i].displayall();
			}
			break;
		case 2:
			for(int i=0;i<n;i++)
			{
				employee[i].getall();
			}
			break;
		case 3:
			char nav[20];
			cout<<"enter name of person";
			cin>>nav;
			for(int i=0;i<n;i++)
			{
				if(strcmp(employee[i].name,nav)==0)
				{
					employee[i].displayall();
				}
			}
			break;
		case 4:

						cout<<"enter name of person";
						cin>>nav;
						for(int i=0;i<n;i++)
						{
							if(strcmp(employee[i].name,nav)==0)
							{
								employee[i].getall();
							}
						}
						break;
		default:
			k=0;
		}
	}while(k!=0);
	return 0;
}
