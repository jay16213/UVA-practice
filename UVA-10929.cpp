#include<stdio.h>
#include<stdlib.h>

int main()
{
    int c;
    while(1)
    {
        int num[1005];
        int i;
        for(i = 0;;i++)
        {
            c = getchar();
            if(c == '\n') break;
            else num[i] = c-48;
        }
        if(i == 1 && num[0] == 0) break;

        int odd_sum = 0,even_sum = 0;
        for(int j = 0;j < i;j++)
        {
            if(j%2 == 0) odd_sum += num[j];//because the array start from 0 => even cnt is the odd digit
            else even_sum += num[j];
        }

        bool ans;
        if(abs(odd_sum-even_sum)%11 == 0) ans = true;
        else ans = false;

        for(int j = 0;j < i;j++) printf("%d",num[j]);
        if(ans) printf(" is a multiple of 11.\n");
        else printf(" is not a multiple of 11.\n");
    }
    return 0;
}
