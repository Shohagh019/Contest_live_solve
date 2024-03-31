#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int hd = s[0] - '0';
        int hu = s[1] - '0';
        int md = s[3] - '0';
        int mu = s[4] - '0';
        int hr = hd * 10 + hu;
        int mt = md * 10 + mu;
        int pm_hrs;
        string am_pm;
        if (hr < 12 && hr!=0)
        {
            pm_hrs = hr;
            am_pm = "AM";
        }
        else if (hr == 12)
        {
            pm_hrs = hr;
            am_pm = "PM";
        }
        else if(hr==0)
        {
            pm_hrs = 12;
            am_pm = "AM";
        }
        else
        {
            pm_hrs = hr - 12;
            am_pm = "PM";
        }
        if (mt > 9)
        {
            if (pm_hrs > 9)
            {
                cout << pm_hrs << ':' << mt << " " << am_pm << endl;
            }
            else
            {
                cout << 0 << pm_hrs << ':' << mt << " " << am_pm << endl;
            }
        }
        else
        {
            if (pm_hrs > 9)
            {
                cout << pm_hrs << ':' <<0<< mt << " " << am_pm << endl;
            }
            else
            {
                cout << 0 << pm_hrs << ':' <<0<<mt << " " << am_pm << endl;
            }
        }
    }
    return 0;
}