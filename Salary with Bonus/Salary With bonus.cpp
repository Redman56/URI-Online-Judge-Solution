#include<bits/stdc++.h>

using namespace std;

int main()
{

    double A, B, C;
    cin.ignore(256,'\n');
    cin >> A >> B;
    C = (B * 15) / 100;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << A + C << "\n";

    return 0;

 }
