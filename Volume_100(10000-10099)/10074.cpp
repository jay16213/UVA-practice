#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    while(scanf("%d %d", &m, &n) && m && n)
    {
        vector<vector<int> > graph(m + 1, vector<int>(n + 1, 0));//graph[i][0] & graph[0][j] is not used
        int area = 0;

        for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
        {
            int in;
            char c;
            scanf("%d%c", &in, &c);
            graph[i][j] = in ? -10000 : 1;
            graph[i][j] += graph[i - 1][j] + graph[i][j - 1] - graph[i-1][j-1];//2-D prefix sum
        }

        for(int x1 = 1; x1 <= m; x1++)
            for(int y1 = 1; y1 <= n; y1++)
                for(int x2 = x1; x2 <= m; x2++)
                    for(int y2 = y1; y2 <= n; y2++)
                    {
                        //a == area of { (x1, y1), (x1, y2), (x2, y1), (x2, y2) }
                        int a = graph[x2][y2] - graph[x1-1][y2] - graph[x2][y1-1] + graph[x1-1][y1-1];
                        area = max(area, a);
                    }

        cout << area << endl;
    }

    return 0;
}