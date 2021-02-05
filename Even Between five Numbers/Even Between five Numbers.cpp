#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A,B,C=0;
    for (B=0; B<5; B++)
    {
      cin >> A;
        if (A%2==0)
            C++;
    }
    cout << C << " valores pares" << endl;
    return 0;
}
