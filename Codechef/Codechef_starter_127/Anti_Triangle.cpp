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
        int n,l;
        cin >> n>>l;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i+j<=l && l-i>=j && l-j>=i)
                {
                    cout<<(i||j);
                }
            }
        }
    }
    return 0;
}