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
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    int i=0;
    while(i<k)
    {
        if(a[i]%2)
        {
            cnt++;
        }
        i++;
    }
    int ans=0;
    if(cnt)
    {
        ans++;
    }

    while(i<n)
    {
        cnt-=(a[i-k]%2==1);
        cnt+=(a[i]%2==1);
        if(cnt)
        {
            ans++;
        }
        i++;
    }

    cout<<ans<<endl;
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

