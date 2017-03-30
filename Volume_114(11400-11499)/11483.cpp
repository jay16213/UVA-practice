#include <bits/stdc++.h>
using namespace std;

void print(string in)
{
    printf("printf(\"");

    for(int i = 0; i < in.size(); i++)
    {
        if(in[i] == '\\' || in[i] == '\'' || in[i] == '\"')
            printf("\\%c", in[i]);
        else printf("%c", in[i]);
    }
    printf("\\n\");\n");
}

int main()
{
    int t = 1;
    string s;
    while(getline(cin, s))
    {
        int n = atoi(s.c_str());
        if(n == 0) break;

        printf("Case %d:\n", t++);
        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n");
        printf("{\n");   

        while(n--)
        {
            string in;
            getline(cin, in);
            print(in);
        }

        printf("printf(\"\\n\");\n");
        printf("return 0;\n");
        printf("}\n");        
    }
    return 0;
}