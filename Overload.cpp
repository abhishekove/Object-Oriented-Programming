//============================================================================
// Name        : Overload.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class ABC
{
	int a,b;

public:

	ABC()
		{
			a=0;
			b=0;
		}
	friend istream & operator >>(istream &in,ABC &c)
	{
	    in>>c.a;
		in>>c.b;
		return in;
	}
	friend ostream & operator <<(ostream &in,ABC &c)
		{
		    in<<c.a;
			in<<c.b;
			return in;
		}
	};


int main() {
	ABC c;
	cin>>c;
  cout <<c;
	return 0;
}
