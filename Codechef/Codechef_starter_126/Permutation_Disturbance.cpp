#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll ans =0;
        for(int i=0; i < n; i++)
        {
            if(a[i] ==i+1)
            {
                ans++;
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
