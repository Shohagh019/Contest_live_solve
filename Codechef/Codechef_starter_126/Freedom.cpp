#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
        vector<ll> a(n+1);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            
            if (a[i] > 1 && (3 * a[i] % (a[i] - 1) == 0))
            {
                ans += mp[3 * a[i] / (a[i] - 1)];
            }
            mp[a[i]]++;            
        }
        cout << ans << endl;
    }
    return 0;
}