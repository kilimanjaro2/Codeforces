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
	ll n,arr[200005],i,mini=prime,cnt=0;
	map<ll,ll>mp1;
	map<ll,bool>mp2;
	cin >> n;
	REP(i,n)
	{
		cin >> arr[i];
		mp1[arr[i]]++;
	}
	sort(arr,arr+n);
	ll diff = arr[n-1]-arr[0];
	cnt = mp1[arr[n-1]]*mp1[arr[0]];
	if(arr[n-1]==arr[0])
		cnt = (mp1[arr[n-1]]*(mp1[arr[n-1]]-1))/2;
	cout << diff << " " << cnt;
	return 0;
}
