# Exercicio 1
```cpp
#include <iostream>
#include <list>

using namespace std;

/**
 * Função para somar todos os elementos da lista
*/
int sumAll(list<int> notes) 
{
    int sum = 0;
    for (list<int>::iterator it = notes.begin(); it != notes.end(); it++) {
        sum += *it;
    }
    return sum;
}

int main() {
    list<int> notes = list<int>(); 
    
    cout << "" << endl;
    cout << " Exercicio 1" << endl;
    cout << " Aplicação para calcular três notas de 0 a 20 de um utilizador" << endl;
    cout << "" << endl;

    // Loop até o utilizador a lista ter três elementos
    do
    {
        cout << "Digite uma nota: ";
        int note;
        cin >> note;

        if (note > 20 && note < 0) cout << "Nota invalida" << endl;
        else notes.push_back(note);

    } while (notes.size() != 3);

    // Calculando a média
    int total = sumAll(notes) / 3;
    if (total >= 10) {
        cout << "Aprovado" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}
```

# Exercicio 2
```cpp
#include <iostream>
#include <list>

using namespace std;

int main()
{
    cout << "" << endl;
    cout << " Exercicio 2" << endl;
    cout << " Aplicação para indicar o maior numero entre dois valores" << endl;
    cout << "" << endl;

    list<int> numbers = list<int>();

    do
    {
        int number;
        cout << "Digite um numero: ";
        cin >> number;
        numbers.push_back(number);
    } while (numbers.size() != 2);

    cout << "O maior numero e: ";
    cout << max(numbers.front(), numbers.back()) << endl;
}
```

# Exercicio 3
```cpp
#include <iostream>
#include <list>

using namespace std;

/**
 * Fazer a tabuada de um determinado valor até o valor máximo
*/
list<int> table(int a, int b) {
    list<int> numbers = list<int>();
    for (int i = 1; i <= b; i++) {
        numbers.push_back(a * i);
    }
    return numbers;
}

int main()
{
    cout << "" << endl;
    cout << " Exercicio 3" << endl;
    cout << " Aplicação para fazer a tabua de um determinado valor" << endl;
    cout << "" << endl;

    cout << "Digite o valor: ";
    int a;
    cin >> a;

    cout << "Qual é o valor máximo: ";
    int b;
    cin >> b;

    list<int> numbers = table(a, b);
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
```

# Exercicio 4
```cpp
#include <iostream>
#include <list>
#include <string>

using namespace std;

string getTriangleName(int a, int b, int c) {

    int minA = min(a, b);
    int minB = min(b, c);
    int maxA = max(a, max(b, c));

    if (minA + minB < maxA) {
        return "Não é um triangulo."
    }

    if (a == b && b == c && a == c) {
        return "Equilátero";
    } else if (a == b || a == c || b == c) {
        return "Isósceles";
    } else {
        return "Escaleno";
}
int main()
{
    cout << "" << endl;
    cout << " Exercicio 4" << endl;
    cout << " Aplicação para calcular se um triângulo é equilátero, isósceles ou escaleno ou indefinido" << endl;
    cout << "" << endl;

    int array[3];

    for (int i = 0; i < 3; i++) {
        cout << "Digite o valor do " << i + 1 << " lado do triângulo: ";
        cin >> array[i];
    }

    cout << getTriangleName(array[0], array[1], array[2]);
}
```

