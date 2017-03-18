#include<stdio.h>

int main()
{
    int N;
    int num[100],i = 0;
    bool init = true;
    while(scanf("%d",&N) != EOF)
    {
        if(N == 0) break;
        else num[i] = N;
        i++;
    }
    printf("PERFECTION OUTPUT\n");


    for(int k = 0;k < i;k++)
    {
        int sum = 0;
        for(int j = 1;j < num[k];j++)
            if(num[k]%j == 0) sum += j;

        printf("%5d  ",num[k]);
        if(sum == num[k]) printf("PERFECT\n");
        else if(sum < num[k]) printf("DEFICIENT\n");
        else printf("ABUNDANT\n");
    }

    printf("END OF OUTPUT\n");

    return 0;
}
