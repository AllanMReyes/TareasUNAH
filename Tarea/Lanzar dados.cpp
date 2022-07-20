#include <iostream>
#include <ctime>
#include <cstdlib>
int input (int cant)
{
  if (cant == 1)
    {
      std::cout << "\"ENTER\" para lanzar el primero";
    }
  else
    {
      std::cout << "\"ENTER\" para lanzar el segundo";
    }
  std::cin.ignore ();
}
int tirardado ()
{
  int ran;
  srand (time (0));
  ran = rand () % 6 + 1;
  std::cout << "Obtuvo " << ran << std::endl;
  return ran;
}

int main ()
{
  int total, primerdado, segundodado;
  input (1);
  primerdado = tirardado ();
  input (2);
  segundodado = tirardado ();
  return 0;
}
