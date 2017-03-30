#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second) return a.first > b.first;
    else return a.second < b.second;
}

int main()
{
    string input;
    bool new_line = false;
    
    while(getline(cin, input))
    {
        if(new_line) cout << endl;
        
        map<char, int> asc;//first => ASCII code of the char; second => count
        vector<pair<char, int> > out;
        
        int size = input.size();
        for(int i = 0; i < size; i++)
        {
            if(asc.find(input[i]) != asc.end()) asc[input[i]]++;
            else asc.insert(pair<char, int>(input[i], 1));
        }
        
        out.assign(asc.begin(), asc.end());
        sort(out.begin(), out.end(), comp);
        
        for(int i = 0; i < out.size(); i++)
            printf("%d %d\n", out[i].first, out[i].second);
    
        new_line = true;
    }
    return 0;
}