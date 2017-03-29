#include<stdio.h>

int main()
{
    int n;
    int a = 1;
    while(scanf("%d",&n) != EOF)
    {
        if(n == 0) break;

        int num[10][10] = {(0,0,0,0,0,0,0,0,0,0)};
        int sum = 0;
        for(int i = 0;i < n;i++)
            for(int j = 0;j < n;j++)
                scanf("%d",&num[i][j]);
        printf("Case %d: ",a);
        a++;
        for(int k = 0;k < n/2+n%2;k++)
        {
            int i,j;
            sum = 0;
            //right
            i = 0+k;
            for(j = 0+k;j < n-k;j++)
                sum += num[i][j];
            //down
            i++;
            j--;
            for(;i < n-k;i++)
                sum += num[i][j];
            //left
            j--;
            i--;
            for(;j >= 0+k;j--)
                sum += num[i][j];
            //up
            i--;
            j++;
            for(;i > 0+k;i--)
                sum += num[i][j];

            if(k == n/2+n%2-1)
                printf("%d\n",sum);
            else
                printf("%d ",sum);
        }
    }
    return 0;
}
