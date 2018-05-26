#include <iostream>

using namespace std;

void intercambiar(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n = 0;
    cout << "Ingrese \'n\': ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el dato #" << i + 1 << ": ";
        cin >> array[i];
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (array[j] > array[j + 1])
                intercambiar(&array[j], &array[j + 1]);

    cout << "Array(" << n << ") ordenado: ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}