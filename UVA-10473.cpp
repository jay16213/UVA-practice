#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;

int power(int base, int Exp)
{
    int ans = 1;
    while(Exp--) ans *= base;
    return ans;
}

int hex_to_dec(string input)
{
    int ans = 0;
    int Exp = input.size() - 1;
    for(int i = 0; i < input.size(); i++)
    {
        if('A' <= input[i])
            ans += (input[i] - 'A' + 10) * power(16, Exp--);
        else
            ans += (input[i] - '0') * power(16, Exp--);
    }
        
    return ans;
}

string dec_to_hex(string input)
{
    string ans = "";
    int dec = atoi(input.c_str());
    
    if(dec == 0) return "0";
    
    for(;dec > 0; dec /= 16)
    {
        int Remainder = dec % 16;
        if(Remainder >= 10) ans += ('A' + (Remainder - 10));
        else ans += ('0' + Remainder);
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string input;
    while(cin >> input)
    {
        int dec;
        string hex;
        
        if(input[0] == '-') break;
        
        if(input[1] == 'x')
        {
            input.assign(input.begin() + 2, input.end());//cut '0x'
            dec = hex_to_dec(input);
            cout << dec << endl;
        }
        else
        {
            hex = dec_to_hex(input);
            cout << "0x" << hex << endl;
        }
    }
    return 0;
}