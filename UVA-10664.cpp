#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int testCase;
    char c;
    scanf("%d%c", &testCase, &c);
    while(testCase--)
    {
        bool ans = false;
        string s;
        int input, n = 0;
        vector<int> suitCase;
        int total = 0;
        
        getline(cin, s);
        stringstream ss(s);
        while(ss >> input)
        {
            total += input;
            n++;
            suitCase.push_back(input);
        }
        
        if(total % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            total /= 2;
            vector<vector<int> > c(n, vector<int>(total + 1, 0));
            
            for(int i = 0; i < n - 1; i++)
                for(int j = 0; j <= total; j++)
                {
                    if(j - suitCase[i] < 0)
                        c[i + 1][j] = c[i][j];
                    else
                        c[i + 1][j] = max(c[i][j], c[i][j - suitCase[i]] + suitCase[i]);
                }
            
            if(c[n - 1][total] == total) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}