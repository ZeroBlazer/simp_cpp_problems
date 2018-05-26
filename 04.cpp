#include <iostream>

using namespace std;

int main()
{
    int n = 0,
        m = 0;
    cout << "Ingrese \'n\': ";
    cin >> n;
    cout << "Ingrese \'m\': ";
    cin >> m;

    int matriz[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Ingrese el dato (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz[i][j];
        }
    }

    int suma = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            suma += matriz[i][j];

    cout << "Suma: " << suma << endl;
}