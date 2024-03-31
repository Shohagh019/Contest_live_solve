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
        ll n,k,x;
        cin>>n>>k>>x;
        int tmp=1;
        for(int i=1; i<k; i++)
        {
            if(x<=0) break;
            x-=tmp;
            tmp*=2;
        }
        if(x>0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}



