#include <iostream>
using namespace std;

int main ()
{
    float notas[6], promedio;
    for (int i=0; i<6; i++)
    {
        cout << "introduzca su " << i << " notas " << '\n';
        cin >> notas[i];
        promedio=promedio+notas[i];
    }
    promedio=promedio/6;
    cout << "Promedio de notas " << promedio << '\n';
}