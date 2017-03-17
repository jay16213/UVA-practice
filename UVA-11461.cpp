#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF)
    {
        if(a == 0 && b == 0) break;

        int ans = 0;
        int root = (int)sqrt(b);
        for(int i = 1;i <= root;i++)
        {
            if((a <= i*i) && (i*i <= b)) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
