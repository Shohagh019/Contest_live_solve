#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int req=b+10;
        int nd= ceil((req-a)/3.0);
        if(nd<=0) cout<<0<<endl;
        else cout<<nd<<endl;
    }
    return 0;
}