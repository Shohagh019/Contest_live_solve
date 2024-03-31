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
        int n;
        cin>>n;
        char mx[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>mx[i][j];
            }
        }
        int curr_row;
        int curr_coll;
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<n; j++)
            {
                if(mx[i][j]=='1')
                {
                    curr_row=i, curr_coll=j;
                }
            }
        }
        int cnt_p =0;
        int cnt_n=0;
        for(int j=0; j<n; j++)
        {
            if(mx[curr_row][j]=='1')
            {
                cnt_p++;
            }
        }
        for(int j=0; j<n; j++)
        {
            if(mx[curr_row+1][j]=='1')
            {
                cnt_n++;
            }
        }
        if(cnt_p==cnt_n) cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
    }
    return 0;
}