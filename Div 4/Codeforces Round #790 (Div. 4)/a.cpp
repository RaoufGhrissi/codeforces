#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
ll t,n,m;

int main()
{
    FAST;
    //freopen("a.txt", "r", stdin);
    t = 1;
    cin>>t;

    while(t--)
    {
        string c;
        cin>>c;
        int ft = c[0]-'0';
        ft += c[1]-'0';
        ft += c[2]-'0';
        int sn = c[3]-'0';
        sn += c[5]-'0';
        sn += c[4]-'0';

        if (ft == sn)
            cout<<"YES";
        else
            cout<<"NO";

        newL;
    }


    return 0;
}