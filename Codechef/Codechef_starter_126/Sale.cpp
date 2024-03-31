#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll ans=0; 
        ll max_ans=0;
        for(int i=0; i<n; i++)
        {
            max_ans=max(max_ans,ans+ a[i]*2);
            ans+=a[i];
        }
        cout<<max_ans<<endl;
    }
    return 0;
}