#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> fib(2, 1);//fib[0] = fib[1] = 1
    for(int i =  2; i < 40; i++) fib.push_back(fib[i-1] + fib[i-2]);

    int N;
    cin >> N;

    while(N--)
    {
        int num;
        cin >> num;
        cout << num << " = ";

        bool last_is_one = false, first = true;
        for(int i = 39; i >= 1; i--)
        {
            if(num >= fib[i] && !last_is_one)
            {
                cout << 1;
                last_is_one = true;
                num -= fib[i];
                first = false;
            }
            else if(!first)
            {
                cout << 0;
                last_is_one = false;
            }
        }

        cout << " (fib)" << endl;
    }
    return 0;
}