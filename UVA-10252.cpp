#include <bits/stdc++.h>
using namespace std;

string src1, src2;
void per(int i, int j, int &max_len, string p, string &ans)
{
    if(i == src1.size() || j == src2.size()) return;

    int k = j;
    for(; k < src2.size() && src1[i] != src2[k]; k++);

    if(k != src2.size())//found
    {
        p.push_back(src1[i]);
        per(i + 1, k + 1, max_len, p, ans);
    }
    else per(i + 1, j, max_len, p, ans);

    if(p.size() > max_len)
    {
        max_len = p.size();
        ans = p;
    }
    else if(p.size() == max_len)
    {
        ans = min(ans, p);
    }

    return;
}

int main()
{
    
    while(getline(cin, src1) && getline(cin, src2))
    {
        if(src1.size() > src2.size()) swap(src1, src2);
        sort(src1.begin(), src1.end());
        sort(src2.begin(), src2.end());

        string ans;
        int len = 0;
        per(0, 0, len, "", ans);
        sort(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}