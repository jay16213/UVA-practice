#include <bits/stdc++.h>
using namespace std;

struct coord{
    int x;
    int y;
};
int m, n;

void BFS(vector<vector<char> > &graph, coord start, coord dir[8])
{
    queue<coord> q;
    q.push(start);

    while(!q.empty())
    {
        coord c = q.front();
        q.pop();
        graph[c.x][c.y] = '*';

        for(int i = 0; i < 8; i++)
        {
            coord go;
            go.x = c.x + dir[i].x;
            go.y = c.y + dir[i].y;

            if(go.x >= 0 && go.x < m && go.y >= 0 && go.y < n)
            {
                if(graph[go.x][go.y] == '@') q.push(go);
            }
        }
    }
    return;
}

int main()
{


    coord dir[8];
    dir[0].x = 1; dir[0].y = 0;//right
    dir[1].x = 1; dir[1].y = 1;//right down
    dir[2].x = 1; dir[2].y = -1;//right up
    dir[3].x = 0; dir[3].y = 1;//down
    dir[4].x = 0; dir[4].y = -1;//up
    dir[5].x = -1; dir[5].y = 0;//left
    dir[6].x = -1; dir[6].y = 1;//left down
    dir[7].x = -1; dir[7].y = -1;//left up
    while(scanf("%d %d", &m, &n) && m)
    {
        vector<vector<char> > graph(m, vector<char>());
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n;j++)
            {
                char c;
                cin >> c;
                graph[i].push_back(c);
            }
        }
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(graph[i][j] == '*') continue;
                else
                {
                    coord c;
                    c.x = i;
                    c.y = j;
                    BFS(graph, c, dir);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}