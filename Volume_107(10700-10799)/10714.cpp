#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases--)
    {
        int m, n;
        int minTime = 0, maxTime = 0;
        cin >> m >> n;
        for(int i = 0; i < n; i++)
        {
            int position;
            cin >> position;
            minTime = max(minTime, min(position, m - position));
            maxTime = max(maxTime, max(position, m - position));
        }
            
        cout << minTime << " " << maxTime << endl;
    }
    return 0;
}