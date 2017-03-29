#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int a[1002] = {0};
        int f[1002] = {0};
        a[0] = 1;
        f[0] = 1;
        for(int k = 2;k < n;k++)
        {
            int tmp[1002] = {0};

            for(int i = 0;i < 1002;i++) tmp[i] = f[i];

            for(int i = 0;i < 1002;i++)
            {
                f[i] = f[i]+a[i];
                if(f[i] >= 10)
                {
                    f[i] -= 10;
                    f[i+1]++;
                }
            }

            for(int i = 0;i < 1002;i++) a[i] = tmp[i];
        }

        for(int i = 1001;i >= 0;i--)
        {
            if(f[i] != 0)
            {
                for(int j = i;j >= 0;j--)
                    printf("%d",f[j]);
                printf("\n");
                break;
            }
        }
    }
    return 0;
}
