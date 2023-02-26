#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int m, n;
int costa = 0;

int check_costa(int i, char *array)
{
    if (i - m >= 0)
    {
        // Checar acima
        if (array[i - m] == '.')
        {
            cout << i << "\n";
            return 1;
        }
    }

    // Checar abaixo
    if (i + m <= n)
    {
        if (array[i + m] == '.')
        {
            cout << i << "\n";
            return 1;
        }
    }
    if (i - 1 >= 0)
    {
        // checar esquerda
        if (array[i - 1] == '.')
        {
            cout << i << "\n";
            return 1;
        }
    }
    if (i + 1 <= m * n)
    {
        // checar direita
        if (array[i + 1] == '.')
        {
            cout << i << "\n";
            return 1;
        }
    }

    return 0;
}

void solve()
{
    char matrix[m * n];

    for (int i = 0; i < m * n; i++)
    {
        cin >> matrix[i];
    }

    for (int i = 0; i < m * n; i++)
    {
        // if (i % m == 0 && i > 0)
        //     cout << "\n";

        // cout << matrix[i];
        if (matrix[i] == '#')
            costa += check_costa(i, matrix);
    }
    cout << costa << "\n";
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n;

    solve();

    return 0;
}