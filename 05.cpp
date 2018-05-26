#include <iostream>

using namespace std;

int main()
{
    int n = 0,
        m = 0,
        o = 0;
    cout << "Ingrese \'n\': ";
    cin >> n;
    cout << "Ingrese \'m\': ";
    cin >> m;
    cout << "Ingrese \'o\': ";
    cin >> o;

    int matriz1[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Ingrese el dato M1(" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz1[i][j];
        }
    }

    int matriz2[m][o];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            cout << "Ingrese el dato M2(" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz2[i][j];
        }
    }

    int matriz3[n][o];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz3[i][j] = 0;
            for (int k = 0; k < o; k++)
            {
                matriz3[i][j] = matriz3[i][j] + (matriz1[i][k] * matriz2[k][j]);
            }
        }
    }

    cout << "M3:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
            cout << matriz3[i][j] << " ";
        cout << endl;
    }
}