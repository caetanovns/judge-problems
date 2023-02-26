#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, c;

int s, e;

void solve()
{
    int capacity = 0;

    int over = false;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;

        capacity += e - s;

        if (capacity > c)
        {
            over = true;
        }
    }

    if (over)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> c;

    solve();

    return 0;
}