#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int N;
    while(cin >> N && N)
    {
        vector<int> bet(2, 0);
        cin >> bet[1];//bet[0] is not used
        int Max = bet[1];
        for(int i = 2; i <= N; i++)
        {
            int tmp;
            cin >> tmp;
            bet.push_back(bet[i - 1] + tmp);
            Max = max(Max, bet.back());
        }
        
        for(int i = 1; i < N; i++)
        for(int j = i + 1; j <= N; j++)
            Max = max(Max, bet[j] - bet[i - 1]);
        
        if(Max > 0) printf("The maximum winning streak is %d.\n", Max);
        else printf("Losing streak.\n");
    }
    return 0;
}