#include<bits/stdc++.h>
using namespace std;
int main()
{
	double M,N=0,O;
    int P,Q=0;
    for (P=1;P<=6;P++)
    {
        cin >> M;
        if (M >= 0)
        {
        Q++;
        N += M;
        }
    }
    O = N / Q;
    cout << Q << " valores positivos" << endl;
    cout << fixed << setprecision(1) << O << endl;
    return 0;
}
