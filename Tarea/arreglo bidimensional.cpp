#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std; 
int random();
int main()
{
	int a = 0; 
    int b[5][5];
    srand(time(NULL));
 
    for (int i = 0; i < 5; i++)
        
	for (int j = 0; j < 5; j++)
        {
        b[i][j] = random();
        a = a + b[i][j];
        }
    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 5; j++)
        {
    printf(" %2d ", b[i][j]);
        }
    printf("\n");
    }
 
    printf("\n  a total: %d\n", a);
 
return 0;
}
	int random()
{
    return rand() % 10 +1;
}
