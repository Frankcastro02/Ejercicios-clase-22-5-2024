#include <iostream>
using namespace std;

int main ()
{
    int suma[100], resultado=0;
    for (int i=0; i<100; i++)
    {
     resultado=resultado+suma[i];
    }
    cout << "La suma de todos los numeros del 1 al 100 es " << resultado << '\n';
}