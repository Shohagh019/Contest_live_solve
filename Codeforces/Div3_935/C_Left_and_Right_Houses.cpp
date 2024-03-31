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
        cin >> n;
        string s;
        cin >> s;
        vector<int> pref(n+1), suf(n+2);
        for(int i=1; i<=n; i++)
        {
            pref[i] = pref[i-1]+ (s[i-1]-'0');
        }
        for(int i=n; i>=1; i--)
        {
            suf[i] = suf[i+1]+ (s[i-1]-'0');
        }
        double mid=(n/2.0), dif, mn_dif=INT_MAX;
        int pos;
        for(int i=1; i<=n; i++)
        {
            int zero, one;
            zero = i-pref[i];
            one = suf[i+1];
            int leftReq, rightReq;
            leftReq= (i+1)/2;// Ceiling division
            rightReq= (n-i+1)/2;// Ceiling division
            if(zero>=leftReq && one>=rightReq)
            {
                dif=abs(mid-i);
                if(dif<mn_dif)
                {
                    mn_dif=dif;
                    pos=i;
                }
            }
        }
        if(mid<=mn_dif && pref[n]>=mid)
        {
            pos=0;
        }
        cout<<pos<<'\n';
    }
    return 0;
}