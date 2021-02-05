#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C;
    cin >> A >> B >> C;
    if (A < B)
    {
        A = A + B;
        B = A - B;
        A = A - B;
    }
    if (A < C)
    {
        A = A + C;
        C = A - C;
        A = A - C;
    }
    if (B < C)
    {
        B = B + C;
        C = B - C;
        B = B - C;
    }
    if (A >= (B+C))
            cout << "NAO FORMA TRIANGULO" << endl;
        else if ((A*A)==((B*B)+(C*C)))
            cout << "TRIANGULO RETANGULO" << endl;
        else if ((A*A)>((B*B)+(C*C)))
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else if ((A*A)<((B*B)+(C*C)))
            cout << "TRIANGULO ACUTANGULO" << endl;
        if (A==B && B==C)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if (A==B || A==C || B==C)
            cout << "TRIANGULO ISOSCELES" << endl;
        return 0;
}
