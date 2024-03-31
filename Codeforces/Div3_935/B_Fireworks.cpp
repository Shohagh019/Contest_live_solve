#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,m;
        cin>>a>>b>>m;
        ll result=((m/a)+1)+((m/b)+1);
        cout<<result<<endl;
    }
    return 0;
}