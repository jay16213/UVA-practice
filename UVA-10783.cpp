#include<stdio.h>

int main()
{
    int T;
    int a,b;
    scanf("%d",&T);
    int x = 1;
    while(T--)
    {
        int odd_sum = 0;
        scanf("%d%d",&a,&b);
        for(int i = a;i <= b;i++)
            if(i%2 == 1) odd_sum += i;

        printf("Case %d: %d\n",x++,odd_sum);
    }
    return 0;
}
