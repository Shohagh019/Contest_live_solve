#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 2e5 + 1;
ll sum_digit(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<ll> v(N);
    v[0] = 0;
    for (ll i = 1; i < N; i++)
    {
        v[i] = v[i - 1] + sum_digit(i);
    }
    while (t--)
    {
        ll n;
        cin >> n;
        cout << v[n] << '\n';
    }
    return 0;
}