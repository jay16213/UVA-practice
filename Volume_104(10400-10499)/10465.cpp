#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int m, n , t;
    while(cin >> m >> n >> t)
    {
        int Max = 0, MaxWithBeer = 0, beer = t;
        for(int x = 0; x <= t / m; x++)
        for(int y = 0; y <= t / n; y++)
        {
            int totalTime = m*x + n*y;
            if(totalTime == t)
            {
                Max = max(Max, (x + y));
                beer = 0;
            }
            else if(totalTime < t && beer)
            {
                if(t - totalTime < beer)
                {
                    MaxWithBeer = x + y;
                    beer = t - totalTime;
                }
                else if(t - totalTime == beer)
                    MaxWithBeer = max(MaxWithBeer, x + y);
            }
        }
        
        if(beer) printf("%d %d\n", MaxWithBeer, beer);
        else printf("%d\n", Max);
    }
    return 0;
}