#include<bits/stdc++.h>

using namespace std;

int main()
{
	double A,B,C;
	cin >> A >> B >> C;
	cout << "TRIANGULO: " << fixed << setprecision(3) << (A * C) / 2 << endl;
	cout << "CIRCULO: " << C * C * 3.14159 << endl;
	cout << "TRAPEZIO: " << ((A + B) / 2) * C << endl;
	cout << "QUADRADO: " << B * B << endl;
	cout << "RETANGULO: " << A * B << endl;

	return 0;
}
