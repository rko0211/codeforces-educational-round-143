#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int i1=0;
    int j1=0;
 
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            i1=i;
            break;
        }
    }
   
    for (int j = 1; j < m; j++)
    {
        if (t[j] == t[j - 1])
        {
          j1=j;
            break;
        }
    }
    if (i1)
    {
        string tem = s.substr(i1);
        reverse(tem.begin(), tem.end());
        t += tem;
        for (int k = 1; k < t.size(); k++)
        {
            if (t[k] == t[k - 1])
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
        return;
    }

    if (j1)
    {
        string tem = t.substr(j1);
        reverse(tem.begin(), tem.end());
        s += tem;
        for (int k = 1; k < s.size(); k++)
        {
            if (s[k] == s[k - 1])
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
        return;
    }
    cout<<"YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}