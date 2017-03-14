#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string input;
    
    while(cin >> input)
    {
        int num, r_num;
        num = atoi(input.c_str());
        reverse(input.begin(), input.end());
        r_num = atoi(input.c_str());
        
        bool prime = true, emirp = true;
        
        for(int i = 2; i <= sqrt(num) && prime; i++)
            if(num % i == 0) prime = false;
        
        if(prime)
        {
            for(int i = 2; i <= sqrt(r_num) && emirp; i++)
                if(r_num % i == 0) emirp = false;
        }
        
        if(prime) 
        {
            if(emirp && num != r_num) printf("%d is emirp.\n", num);
            else printf("%d is prime.\n", num);
        }
        else printf("%d is not prime.\n", num);
    }
    
    return 0;
}