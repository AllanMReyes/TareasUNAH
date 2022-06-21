#include <iostream>

using namespace std;
int main(int  argc, char const *argv[])
	{
	int a = 0, b = 0, c;
	for (int i = 1; i <= 10; i++)
	{
	if (i % 2 == 0)
	{
	a = a + i;
	}
	else {
	b = b + i;
	}	
	cout << i;
	c = a + b; 
	}
	cout << endl;
	cout << endl;
	cout << "Suma de Pares: " << a<<endl; 
	cout << "Suma de impares: " << b<<endl; 
	cout << "Suma total: " << c<<endl; 
	
return 0;
}
