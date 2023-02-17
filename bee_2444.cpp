#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int v, t;

void solve()
{
    int volume;
    
    for (int i = 0; i < t; i++)
    {
        cin >> volume;
        v += volume;
        if (v > 100)
            v = 100;
        if (v < 0)
            v = 0;
    }
    
    cout << v << "\n";
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> v >> t;

    solve();

    return 0;
}