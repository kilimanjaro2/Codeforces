#include<bits/stdc++.h>
/*
ID: arun.ga1
LANG: C++
TASK: 
*/

using namespace std;

#define prime 1000000007
#define DEBUG(x) cout<<'>'<<#x<<':'<<x<<"\n"
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define p1(x) cout<<x<<"\n" 
#define p2(x,y) cout<<x<<" "<<y<<"\n" 
#define p3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define i1(x) cin>>x
#define i2(x,y) cin>>x>>y
#define i3(x,y,z) cin>>x>>y>>z
#define elif else if

const int INF = 1<<29;
typedef long long ll;

ll n,arr[200005],par[200005],val[200005],red[200005],ans[200005];
bool vis[200005];
vector <ll> vec[200005];
/////////////////////////////////////////////////////////////////////

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll n,i,a,b;
	cin >> n;
	REP(i,n)
		cin >> val[i+1];
	REP(i,n-1)
	{
		cin >> a >> b;
		vec[a].pb(b);
		vec[b].pb(a);
	}
	
	return 0;
}

