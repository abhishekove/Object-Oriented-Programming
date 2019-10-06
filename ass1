#include <iostream>
using namespace std;


class number
{

	float a,b,c;


public:
	char r;
	void add();
	void sub();
	void mul();
	void div();
	void accept();


};
void number::accept()
	{
	cout<<"Enter command as number1 operator number2"<<endl;
	cin>>a>>r>>b;
	}

void number :: add()
{
	c=a+b;
	cout<<a<<r<<b<<" = "<<c<<endl;

}
void number :: sub()
{
	c=a-b;
	cout<<a<<r<<b<<" = "<<c<<endl;

}

void number :: mul()
{
	c=a*b;
	cout<<a<<r<<b<<" = "<<c<<endl;

}

void number :: div()
{
	if(b==0)
	{
		cout<<"Invalid Denominator cannot be zero \n";
	}
	else
	{
	c=a/b;
	cout<<a<<r<<b<<" = "<<c<<endl;
	}

}


int main()
	{ int cont=1;
	number obj;

do
{
	obj.accept();

switch (obj.r)
{
case '+':obj.add();
break;
case '-':obj.sub();
break;
case '*':obj.mul();
break;
case '/':obj.div();
break;

default:cout<<"Invalid operator\n";
}
cout<<"Do you want to continue?\n If yes press '1'"<<endl;
cin>>cont;
}
while(cont==1);
	return 0;
}
