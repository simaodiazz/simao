#include <iostream>
#include <list>
#include <string>

using namespace std;

string getTriangleName(int a, int b, int c)
{

    int minA = min(a, b);
    int minB = min(b, c);
    int maxA = max(a, max(b, c));

    if (minA + minB < maxA)
    {
        return "Não é um triangulo.";
    }

    if (a == b && b == c && a == c)
    {
        return "Equilátero";
    }
    else if (a == b || a == c || b == c)
    {
        return "Isósceles";
    }
    else
    {
        return "Escaleno";
    }
}

int main()
{
    cout << "" << endl;
    cout << " Exercicio 4" << endl;
    cout << " Aplicação para calcular se um triângulo é equilátero, isósceles ou escaleno ou indefinido" << endl;
    cout << "" << endl;

    int array[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Digite o valor do " << i + 1 << " lado do triângulo: ";
        cin >> array[i];
    }

    cout << getTriangleName(array[0], array[1], array[2]);
}