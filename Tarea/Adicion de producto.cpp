#include <iostream>

using namespace std;


extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos (int opcion)

{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "******************" << endl;
        cout << "1. Atol " << endl;
        cout << "2. Té Negro " << endl;
        cout << "3. Expresso " << endl;
        cout << "4. Capuccino " << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
        agregarProducto(" Atol L 15", 1, 15);
        break;
        case 2:
        agregarProducto(" Té Negro L 20", 1, 20);
        break;
        case 3:
        agregarProducto(" Expresso L 35", 1, 35);
        break;
        case 4:
        agregarProducto(" Capuccino L 40", 1, 40);
        break;        
               
        default:
           {
            cout << "No disponible";
            return;
            break;
           }
        }
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1. Café Granizado" << endl;
        cout << "2. Te Frio " << endl;
        cout << "3. Granizado de Fresa" << endl;
        cout << "4. Granizado de piña " << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
        agregarProducto(" Café Granizado L 32", 1, 32);
        break;
        case 2:
        agregarProducto("1 Te Frio L 24", 1, 24);
        break;
        case 3:
        agregarProducto(" Granizado de Fresa L 22", 1, 22);
        break;
        case 4:
        agregarProducto(" Granizado de piña L 23", 1, 23);
        break;        
                
        default:
               {
                  cout << "No disponible";
                  return;
                  break;
               }
        }
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

         break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1. Cheese Cake " << endl;
        cout << "2. Tres Leches " << endl;
        cout << "3. Tarta de Fresa " << endl;
        cout << "4. Pastel de Chocolate " << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
        agregarProducto(" Cheese Cake L 50", 1, 50);
        break;
        case 2:
        agregarProducto(" Tres leches L 47", 1, 47);
        break;
        case 3:
        agregarProducto(" Tarta de Fresa L 45", 1, 45);
        break;
        case 4:
        agregarProducto("1 Pastel de Cocolate L 50", 1, 50);
        break;        
                
        default:
               {
                  cout << "No disponible";
                  return;
                  break;
               }
        }
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    }


    default:
        break;
    }
}
