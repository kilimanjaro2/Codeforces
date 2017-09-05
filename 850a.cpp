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
	ll a[5],b[5],k,q,n,arr[1005][5],i,j,val[1005]={0};
	vector<ll>vec;
	cin >> n;
	REP(i,n)
		REP(j,5)
		cin >> arr[i][j];
	if(n==1)
	{
		cout << "1\n1";
		return 0;
	}
	else if (n==2)
	{
		cout << "2\n1\n2";
		return 0;
	}
	else
	{
		REP(i,n)
		{
			bool flag = 0;
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					if(i!=j && i!=k && j!=k)
					{
						ll temp = 0;
						for(q=0;q<5;q++)
						{
							a[q] = arr[i][q] - arr[j][q];
							b[q] = arr[i][q] - arr[k][q];
							temp += (a[q]*b[q]);
						}
						if(temp<=0)
							val[i]++;
						else
						{
							flag =1;
							break;
						}
					}
				}
				if(flag)
					break;
			}
		}
		for(i=0;i<n;i++)
			if(val[i]==((n-2)*(n-1)))
				vec.pb(i+1);
		cout << vec.size() << endl;
		REP(i,vec.size())
			cout << vec[i] << endl;
	}
	return 0;
}

