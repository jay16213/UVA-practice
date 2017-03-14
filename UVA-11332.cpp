#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;

int f(int n)
{
    if(n < 10) return n;
    else {
        int ans = 0;
        while(n > 0)
        {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
}

int main()
{
    int n;
    while(cin >> n && n)
    {
        int ans = f(n);
        while(ans >= 10) ans = f(ans);
        cout << ans << endl;
    }
    return 0;
}