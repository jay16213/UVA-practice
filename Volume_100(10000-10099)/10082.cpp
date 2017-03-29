#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[100000];

    while(fgets(input,sizeof(input),stdin) != NULL)
    {
        char output[100000] = "\0";
        for(int i = 0;i < 100000;i++)
        {
            if(input[i] == ' ') output[i] = ' ';
            if(input[i] == '\n') output[i] = '\n';
            if(input[i] == 'B') output[i] = 'V';
            if(input[i] == 'C') output[i] = 'X';
            if(input[i] == 'D') output[i] = 'S';
            if(input[i] == 'E') output[i] = 'W';
            if(input[i] == 'F') output[i] = 'D';
            if(input[i] == 'G') output[i] = 'F';
            if(input[i] == 'H') output[i] = 'G';
            if(input[i] == 'I') output[i] = 'U';
            if(input[i] == 'J') output[i] = 'H';
            if(input[i] == 'K') output[i] = 'J';
            if(input[i] == 'L') output[i] = 'K';
            if(input[i] == 'M') output[i] = 'N';
            if(input[i] == 'N') output[i] = 'B';
            if(input[i] == 'O') output[i] = 'I';
            if(input[i] == 'P') output[i] = 'O';
            if(input[i] == 'R') output[i] = 'E';
            if(input[i] == 'S') output[i] = 'A';
            if(input[i] == 'T') output[i] = 'R';
            if(input[i] == 'U') output[i] = 'Y';
            if(input[i] == 'V') output[i] = 'C';
            if(input[i] == 'W') output[i] = 'Q';
            if(input[i] == 'X') output[i] = 'Z';
            if(input[i] == 'Y') output[i] = 'T';
            if(input[i] == '/') output[i] = '.';
            if(input[i] == '.') output[i] = ',';
            if(input[i] == ',') output[i] = 'M';
            if(input[i] == '\'') output[i] = ';';
            if(input[i] == ';') output[i] = 'L';
            if(input[i] == '\\') output[i] = ']';
            if(input[i] == ']') output[i] = '[';
            if(input[i] == '[') output[i] = 'P';
            if(input[i] == '=') output[i] = '-';
            if(input[i] == '-') output[i] = '0';
            if(input[i] == '1') output[i] = '`';
            if(input[i] == '2') output[i] = '1';
            if(input[i] == '3') output[i] = '2';
            if(input[i] == '4') output[i] = '3';
            if(input[i] == '5') output[i] = '4';
            if(input[i] == '6') output[i] = '5';
            if(input[i] == '7') output[i] = '6';
            if(input[i] == '8') output[i] = '7';
            if(input[i] == '9') output[i] = '8';
            if(input[i] == '0') output[i] = '9';
        }
        printf("%s",output);
        strcmp(input,"\0");
    }
    return 0;
}
