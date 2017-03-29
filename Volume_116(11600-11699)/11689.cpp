#include<stdio.h>

int soda(int e,int f,int c)
{
    if((e+f) < c) return 0;
    else return (e+f)/c+soda((e+f)/c,(e+f)%c,c);
}
int main()
{
    int N;
    int e,f,c;
    scanf("%d",&N);
    for(int i = 0; i< N;i++)
    {
        scanf("%d %d %d",&e,&f,&c);
        printf("%d\n",soda(e,f,c));
    }
    return 0;
}
