#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    for(int k = 1;k <= N;k++)
    {
        int Land[101][101];
        for(int i = 0;i < 101;i++)
        for(int j = 0;j < 101;j++)
            Land[i][j] = 0;
        int x1,y1,x2,y2;
        int S = 0,W = 0,U = 0;
        for(int k = 1;k <= 2;k++)
        {
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            W += (x2-x1)*(y2-y1);
            for(int i = x1;i < x2;i++)
            {
                for(int j = y1;j < y2;j++)
                    Land[i][j]++;
            }
        }

        for(int i = 0;i < 101;i++)
            for(int j = 0;j < 101;j++)
            {
                if(Land[i][j] == 2) S++;
            }
        W -= 2*S;
        U = 10000-(W+S);
        printf("Night %d: %d %d %d\n",k,S,W,U);
    }
    return 0;
}
