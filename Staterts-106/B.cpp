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

    if(n%2==0 || n==1)
    {
        cout<<"Bob"<<endl;

    }
    /*
    vector<int>ans;
    for(int i=3; i<=sqrt(n); i++)
    {
        ans.pb(i);
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n!=1)
    {
        ans.pb(n);
    }

    if(ans.size()%2)
    {
        cout<<"Alice"<<endl;
    }
    */
    else
    {
        cout<<"Alice"<<endl;
    }
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

