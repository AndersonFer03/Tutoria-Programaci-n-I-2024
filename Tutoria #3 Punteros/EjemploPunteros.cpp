#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int x=100;
	int *q;
	
	//q=x; ERROR 
	q=&x;
	cout<<*q<<endl;
	
	cout<<"\n--Ejemplo String--\n\n";
	string word="casa";
	string *y;
	y=&word;
	
	cout<<*y<<endl;
	
	*y="moto";
	cout<<word;
	return 0;
}

