#include <bits/stdc++.h>
using namespace std;
vector<int> d;
void get_divisor(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (n / i != i)
            {
                d.push_back(n / i);
            }
        }
    }
    sort(d.begin(), d.end());
}
bool check_str(string a, string b)
{
    int cnt = 0;
    for (int i = 0; i < a.length(); i++)
    {

        if (a[i] != b[i])
        {
            cnt++;
        }
    }
    if (cnt > 1)
        return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        get_divisor(n);
        for (auto &it : d)
        {
            string k = s.substr(0, it);
            string l = s.substr(n - it);
            string tmp1 = "", tmp2 = "";
            for (int i = 0; i < (n / it); i++)
            {
                tmp1 += k;
                tmp2 += l;
            }
            if (check_str(tmp1, s) || check_str(tmp2, s))
            {
                cout << it << endl;
                break;
            }
        }
        d.clear();
    }
    return 0;
}