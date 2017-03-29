#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n;
    
    while(cin >> n)
    {
        vector<bool> jolly(n, false);//jolly[0] is not used
        int last, now;//the 2 successive elements
        
        cin >> last;//the first input
        for(int i = 1; i < n; i++)
        {
            cin >> now;
            int diff = abs(last- now);
            if(1 <= diff && diff <= n-1) jolly[diff] = true;
            last = now;
        }
        
        bool j = true;
        for(int i = 1; i < n && j; i++)
            if(!jolly[i]) j = false;
        
        if(j) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
    
    return 0;
}