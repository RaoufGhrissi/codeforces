#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define Pair pair<ll,ll>
#define iPair pair<int,int>
#define newL cout<<endl
#define ll_max 1e18
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define sortt(v) sort(all(v))
#define forn(j,n) for (int i=j ; i<n ; i++)

using namespace std;

int t,n;
int main()
{
    FAST;
    //freopen("a.txt", "r", stdin);
    t = 1;
    cin>>t;

    while(t--)
    {
        cin>>n;
        string c;
        cin>>c;
        map<int,bool> occ;
        int ans=0;
        for (int i=0 ; i<n ; i++)
        {
            if (occ.find(c[i]) != occ.end())
                ans++;
            else
            {
                occ[c[i]]=1;
                ans+=2;
            }
        }
        cout<<ans;
        newL;
    }

    return 0;
}