#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    int cont;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> p;
        cont = 0;
        for(int i = 1; i < sqrt(p); i++)
        {
            if(p%i == 0) cont++;
            if(cont > 1) break;
        }
        if(cont == 1)
        {
            cout << p << " eh primo\n";
        }
        else
        {
            cout << p << " nao eh primo\n";
        }
    }
    return 0;
}
