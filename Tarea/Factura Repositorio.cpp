#include <iostream>


using namespace std;

int main()
{
	float monto =0;
	float impuesto= 0;
	float total = 0;
	char sin_pagar;
	
	cout << " Ingrese el valor de la compra: " << endl;
	cin  >>   monto;
	
	cout << " La factura de esta excenta es de? S o N: " << endl;
	cin >> sin_pagar;
	
	if(sin_pagar =='S'|| sin_pagar =='s')
	{	
		impuesto = monto *0.15;
		total = monto + impuesto;
	}
	
	else
	if(sin_pagar=='S'|| sin_pagar== 's')
	{
		total = monto;
	}
	
	cout << " El total a pagar es de: " << total << endl;
	
	return 0;
}
