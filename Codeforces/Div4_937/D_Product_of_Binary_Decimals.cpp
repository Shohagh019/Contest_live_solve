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
        int n;
        cin>>n;
        vector<int> v;
        v.push_back(10);
        v.push_back(11);
        for(int i=0; i<n; i++)
        {
            
            int x=v[i]*10;
            int y=x+1;
            if(x<=n)
            {
                v.push_back(x);
            }
            if(y<=n)
            {
                v.push_back(y);
            }
            if(x>=n || y>=n) break;
        }
        reverse(v.begin(), v.end());
        while(n>1)
        {
            bool ok=false;
            for(int i=0; i<v.size(); i++)
            {
                if(n%v[i]==0)
                {
                    n/=v[i];
                    ok=true;
                }
            }
            if(!ok) break;
        }
       if(n==1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }
    return 0;
}