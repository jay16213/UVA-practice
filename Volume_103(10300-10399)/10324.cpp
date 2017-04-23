#include <bits/stdc++.h>
using namespace std;

int main()
{
    string in;
    int testCase = 1;
    while(cin >> in)
    {
        cout << "Case " << testCase++ << ":" << endl;
        int n, i, j;
        cin >> n;
        
        while(n--)
        {
            cin >> i >> j;
            bool same = true;
            char c = in[min(i, j)];
            for(int k = min(i, j) + 1; k <= max(i, j) && same; k++)
            {
                if(in[k] != c) same = false;
            }
            
            if(same) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}