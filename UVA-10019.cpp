#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int convert_to_Bin(int M)//convert M from 10 base to 2 base
{//and return the number of 1 of M in 2 base
    int one = 0;
    while(M > 0)
    {
        int n = M / 2;
        if(M % 2 == 1) one++;
        M = n;
    }
    return one;
}

int main()
{
    int testcase;
    int hex[10] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2 };//num of one for converting hex to bin
    cin >> testcase;
    while(testcase--)
    {
        int M;
        int b1 = 0, b2 = 0;
        cin >> M;;
        b1 = convert_to_Bin(M);
        while(M > 0)
        {
            int tmp = M % 10;
            b2 += hex[tmp];
            M = M / 10;
        }
        
        cout << b1 << " " << b2 << endl;
    }
    return 0;
}