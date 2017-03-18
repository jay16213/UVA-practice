#include <bits/stdc++.h>
using namespace std;

class coord {
public:
    coord() {}
    coord(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    int x, y;
};

int main()
{
    int n;
    coord dir[6];
    dir[0].set(0, 1);//up
    dir[1].set(-1, 1);//left up
    dir[2].set(-1, 0);//left
    dir[3].set(0, -1);//down
    dir[4].set(1, -1);//right down
    dir[5].set(1, 0);//right

    coord now_dir(1, 0);//x => move counter, y => dir[y]
    coord init(0, 0);//initial coordinate

    map<int, coord> honey;
    honey.insert(pair<int, coord>(1, init));//honey[1] == (0, 0)
    int now = 1;
    while(cin >> n)
    {
        coord c(honey[now].x, honey[now].y);
        if(n <= now)
        {
            printf("%d %d\n", honey[n].x, honey[n].y);
            continue;
        }

        for(++now; now <= n;)
        {
            for(int i = 0; i < 6; i++)
            {
                int move = now_dir.y == 1 ? now_dir.x - 1 : now_dir.x;
                for(int j = 0; j < move; j++, now++)
                {
                    c.x += dir[now_dir.y].x;
                    c.y += dir[now_dir.y].y;
                    honey.insert(pair<int, coord>(now, c));
                }
                now_dir.y = (now_dir.y + 1) % 6;
            }
            now_dir.x++;
        }
        printf("%d %d\n", honey[n].x, honey[n].y);
        now--;
    }

    return 0;
}