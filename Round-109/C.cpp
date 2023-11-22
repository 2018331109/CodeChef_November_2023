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
    int odd=0, even=0;
    vector<int>o, e;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2)
        {
            o.pb(a[i]);
            odd++;
        }
        else
        {
            e.pb(a[i]);
            even++;
        }
    }

    if(odd%2)
    {
        neg;
        return;
    }

    sort(o.begin(), o.end());
    sort(e.begin(), e.end());

    int sz;

    sz=o.size();
    vector<int>ans(n);
    int i=0, j=n/2;


    int l=0, r=sz-1;
    while(l<r)
    {
        int f=o[l], s=o[r];
        if(f==s)
        {
            ans[i++]=f, ans[j++]=0;
        }
        else
        {
            int mid=s/2;
            int dd=f/2;
            int ff=mid-dd, ss=mid+(f-dd);
            ans[i++]=ff, ans[j++]=ss;

        }
        l++, r--;
    }

    sz=e.size();
    //cout<<sz<<endl;
    l=0, r=sz-1;
    while(l<r)
    {
        int f=e[l], s=e[r];
        if(f==s)
        {
            ans[i++]=f, ans[j++]=0;
        }
        else
        {
            int mid=s/2;
            int dd=f/2;
            int ff=mid-dd, ss=mid+(f-dd);
            ans[i++]=ff, ans[j++]=ss;

        }
        l++, r--;
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;


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

