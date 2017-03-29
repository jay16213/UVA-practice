#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

void can_smoke(int &total, int numOfCigarettes, int numOfButts, int k)
{
    total += numOfCigarettes;
    numOfButts += numOfCigarettes;
    
    if(numOfButts < k) return;
    
    numOfCigarettes = numOfButts / k;
    numOfButts %= k;
    can_smoke(total, numOfCigarettes, numOfButts, k);
}

int main()
{
    int n, k;//have n cigarettes initially, can roll a new cigatte with k butts
    while(cin >> n >> k)
    {
        int ans = 0;
        can_smoke(ans, n, 0, k);
        cout << ans << endl;
    }
    return 0;
}