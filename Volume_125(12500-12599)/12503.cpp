#include<stdio.h>

int main()
{
    int T;
    char instr[20];

    scanf("%d",&T);
    while(T--){
        int x = 0,n,tmp;
        int flag[110] = {0};
        scanf("%d",&n);
        for(int i = 1;i <= n;i++){
            scanf("%s",instr);
            if(instr[0] == 'L'){
                x--;
                flag[i] = -1;
            }
            else if(instr[0] == 'R'){
                x++;
                flag[i] = 1;
            }
            else{
                scanf("%s%d",instr,&tmp);
                x += flag[tmp];
                flag[i] = flag[tmp];
            }
        }
        printf("%d\n",x);
    }
    return 0;
}
