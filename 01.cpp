#include <iostream>

using namespace std;

bool esPrimo(int &n)
{
    if (n == 1)
        return true;

    int factores = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            factores += 1;
    return factores == 2;
}

int main()
{
    int n = 0;
    cout << "Ingrese \'n\': ";
    cin >> n;

    int contador = 0, suma = 0, i = 1;
    while (contador < n)
    {
        if (esPrimo(i))
        {
            contador += 1;
            suma += i;
        }
        i++;
    }

    cout << "Promedio: " << suma * 1.0 / n << endl;
}