#include <bits/stdc++.h>
using namespace std;

unsigned long long int func(int b, int p, int m)
{
    if(p == 1) return b % m;
    if(p == 0) return 1;
    if(p % 2 == 0) return (func(b, p/2, m) * func(b, p/2, m))%m;
    else return (func(b, 1, m) * func(b, p-1, m))%m;
}

int main()
{
    unsigned long long int b, p, m;
    while(cin >> b >> p >> m) cout << func(b, p, m) << endl;
    return 0;
}