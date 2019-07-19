//============================================================================
// Name        : Student.cpp
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
public:
	string blood,div;
	int roll;
	char name[20];

	Student()
	{
		roll=0;
		strcpy(name,"raju");
		blood="b+ve";
		div="c";
	}
	void get()
	{
		cout <<"\n Enter name,roll,div,blood group";
		cin >>name>>roll>>div>>blood;
	}
	void display()
	{
		cout <<name<<"\n"<<roll<<"\n"<<div<<"\n"<<blood<<"\n";
	}
	};
int main() {
int k,a,o;

char kk[20],check[20];
cout <<"\n enter number students to study";
cin >>k;
Student porga[k];
for(int i=0;i<k;i++)
{
	porga[i].get();
	}
do
{
	cout <<"\n enter 1 for display data \n 2 for search \n 3 for update  \n press anything to exit";
	cin >>a;
	switch(a)
	{
		case 1:
			for(int i=0;i<k;i++)
			{
				porga[i].display();
			}
		break;

		case 2:
			cout <<"enter 1 to search by name or 2 to search by roll ";
			cin >>o;
			if(o==1)
			{
				cout <<"enter name";
				cin >>check;
				for(int i=0;i<k;i++)
				{
					strcpy(kk,porga[i].name);
					if( strcmp(check,kk)==0)
				{
					porga[i+1].display();
					break;
				}
				}
			}
			if(o==2)
			{
				cout <<"Enter roll"	;
													cin >>o;
														for(int i=0;i<k;i++)
																		{				if(porga[i].roll==o)
																		{
																			porga[i].display();
																			break;
																		}
																		}
			}
			break;
		case 3:
			cout <<"Enter roll"	;
						cin >>o;
							for(int i=0;i<k;i++)
											{				if(porga[i].roll==o)
											{
												porga[i].get();
												break;
											}
											}
							break;
		default:
			k=0;
			break;



	}
	}while(a!=0);
}

