#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    while(cin >> str1 >> str2)
    {
        int i = 0, j = 0;
        for(;i < str1.size() && j < str2.size(); j++)
        {
            if(str1[i] == str2[j]) i++;
        }

        if(i == str1.size()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}