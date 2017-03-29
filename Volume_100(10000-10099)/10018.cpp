#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;

long long int reverse(long long int num)
{
    long long int r_num = 0;
    while(num > 0)
    {
        r_num = (r_num * 10) + num % 10;
        num /= 10;
    }
    
    return r_num;
}

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int numOfSteps = 0;
        long long int num, ans = 0;
        cin >> num;
        
        long long int r_num = reverse(num);

        do
        {
            ans = num + r_num;
            num = ans;
            r_num = reverse(ans);
            numOfSteps++;
        }while(num != r_num);
        
        cout << numOfSteps << " " << ans << endl;
    }
    return 0;
}