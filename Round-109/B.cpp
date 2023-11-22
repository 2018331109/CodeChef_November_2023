#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;
int md = 998244353;

const int INF = 1e18;

void solve()
{

    int n;
    cin>>n;
    int a[n];
    int ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        ans^=a[i];
    }
    int res=ans;

    for(int i=0; i<n; i++)
    {
        int now=ans^a[i];

        res=min(res, now);
    }

    cout<<res<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

