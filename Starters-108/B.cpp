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
    int a[n+1];
    map<int, vector<int>>mp;
    int x;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        mp[x].pb(i);
        a[i]=x;
    }
    if(mp.size()==1)
    {
        cout<<x<<" "<<0<<endl;
        return;
    }
    int ans=1000000009;
    int index;
    /*
    for(auto it:mp)
    {
        mp[it.first].pb(n);
    }
    */
    for(auto it:mp)
    {
        //cout<<it.first<<endl;
        int cnt=0;
        int f=0;
        int last=0;
        for(auto iit:it.second)
        {
            if(f==0)
            {
                cnt=iit-1;
            }
            else
            {
                cnt=max(cnt, (iit-last+1)/2);
            }
            last=iit;
            //cout<<cnt<<endl;
            f++;
            if(f==it.second.size())
            {
                cnt=max(cnt, n-iit);
            }
        }
        //cout<<endl;
        if(cnt<ans)
        {
            ans=cnt;
            index=it.first;
        }
    }

    cout<<index<<" "<<ans<<endl;

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

