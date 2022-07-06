#include <iostream>

using namespace std;

double impuesto = 0.15;
double subtotal;
double total;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    total = impuesto + subtotal;
}

void imprimirFactura()
{
    system("cls");
    cout << "*******"<< endl;
    cout << "FACTURA"<< endl;
    cout << "*******"<< endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "ISV 15% : L " << impuesto;
    cout << endl;
    cout << endl;
    cout << "Subtotal: L " << subtotal;
    cout << endl;
    cout << endl;
    cout << "Total: L " << total;
    cout << endl;
    cout << endl;
    system("pause");

}
