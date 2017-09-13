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

/////////////////////////////////////////////////////////////////////

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll n,k,p,i,a[1005],b[2005], maxi = 1e18, pos=0,q,ans = 0;
	cin >> n >> k >> p;
	REP(i,n)
		cin >> a[i];
	REP(i,k)
		cin >> b[i];
	sort(a,a+n);
	sort(b,b+k);
	REP(j,n)
	{
		REP(i,k)
		{
			if((abs(a[j]-b[i])+abs(p-b[i]))<maxi)
			{
				maxi = abs(a[j]-b[i])+abs(p-b[i]);
				pos = i;
			}
		}
	}
	REP(i,n)
	{
		q = abs(a[i]-b[i+pos]) + abs(b[i+pos]-p);
		if(q>ans)
			ans=q;
	}
	cout << ans;
	return 0;
}