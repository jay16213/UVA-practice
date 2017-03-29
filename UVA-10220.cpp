#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> ans(1, 1);

        for(int i = 2; i <= n; i++)
        {
            vector<int> mul;
            int m = i;
            for(; m > 0; m /= 10) mul.push_back(m % 10);

            vector<int> mulp;
            mulp = ans;

            for(int digit = 0; digit < mul.size(); digit++)
            {
                vector<int> partial_result;

                for(int al = 0; al < digit; al++) partial_result.push_back(0);

                int carry = 0;

                for(int j = 0; j < mulp.size(); j++)
                {
                    int tmp = mulp[j] * mul[digit] + carry;
                    if(tmp >= 10)
                    {
                        carry = tmp / 10;
                        tmp %= 10;
                    }
                    else carry = 0;
                    partial_result.push_back(tmp);
                }
                if(carry) partial_result.push_back(carry);
                carry = 0;

                if(digit)
                {
                    for(int t = partial_result.size() - ans.size(); t > 0; t--) ans.push_back(0);
                    for(int d = 0; d < partial_result.size(); d++)
                    {
                        ans[d] = ans[d] + partial_result[d]  + carry;
                        if(ans[d] >= 10)
                        {
                            carry = 1;
                            ans[d] %= 10;
                        }
                        else carry = 0;
                    }
                    if(carry) ans.push_back(carry);
                    carry = 0;
                }
                else ans = partial_result;
            }
        }

        int f = 0;
        for(int i = 0; i < ans.size(); i++) f += ans[i];
        cout << f << endl;
    }
    return 0;
}