#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool comp(pair<char, int> a, pair<char, int> b)
{
    if(a.second == b.second) return a.first < b.first;
    else return a.second > b.second;
}

int main()
{
    int line;
    char c;
    scanf("%d%c", &line, &c);
    
    string input;
    map<char, int> table;//first == alpha, second == count
    
    for(int i = 0;i < line; i++)
    {
        getline(cin, input);
        int size = input.size();
        for(int j = 0; j < size; j++)
        {
            if(isalpha(input[j]))
            {
                int u = toupper(input[j]);
                if(table.find(u) != table.end()) table[u]++;
                else table.insert(pair<char, int>(u, 1));
            }
        }
    }
    
    //put map into vector, so that we can use sort func
    vector<pair<char, int> > analysis(table.begin(), table.end());
    sort(analysis.begin(), analysis.end(), comp);
    
    for(int i = 0; i < analysis.size(); i++)
        cout << analysis[i].first << " " << analysis[i].second << endl;
    
    return 0;
}