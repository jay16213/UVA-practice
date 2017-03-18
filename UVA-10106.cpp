#include <bits/stdc++.h>
using namespace std;

int main()
{
    string in1, in2;
    while(cin >> in1 >> in2)
    {
        //any number multiply 0 = 0
        if(in1 == "0" || in2 == "0")
        {
            printf("0\n");
            continue;
        }

        vector<int> x, y, ans;//ans = x * y
        for(int i = in1.size() - 1; i >= 0; i--) x.push_back(in1[i] - '0');
        for(int i = in2.size() - 1; i >= 0; i--) y.push_back(in2[i] - '0');

        for(int digit = 0; digit < y.size(); digit++)
        {
            vector<int> partial_product;
            //shift digit
            for(int i = 0; i < digit; i++) partial_product.push_back(0);

            int carry = 0;

            for(int j = 0; j < x.size(); j++)
            {
                int tmp = x[j] * y[digit] + carry;
                if(tmp >= 10)
                {
                    carry = tmp / 10;
                    tmp %= 10;
                }
                else carry = 0;
                partial_product.push_back(tmp);
            }

            if(carry) partial_product.push_back(carry);
            carry = 0;
            
            //align digit
            for(int i = ans.size(); i < partial_product.size(); i++) ans.push_back(0);

            //add partial_product to ans
            for(int i = 0, j = 0; i < ans.size() && j < partial_product.size(); i++, j++)
            {
                int tmp = ans[i] + partial_product[j] + carry;
                if(tmp >= 10)
                {
                    carry = 1;
                    tmp -= 10;
                }
                else carry = 0;
                ans[i] = tmp;
            }

            if(carry) ans.push_back(carry);
        }

        for(int i = ans.size() - 1; i >= 0; i--) printf("%d", ans[i]);
        printf("\n");
        in1.clear();
        in2.clear();
    }
    return 0;
}