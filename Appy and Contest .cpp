//https://www.codechef.com/LRNDSA05/problems/HMAPPY2/
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define const int N=1e5+5;
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,a,b,k;cin>>n>>a>>b>>k;
        int lcm=(a*b)/__gcd(a,b);
        int cnt=n/a +n/b - 2*(n/lcm);
        cout<<(cnt>=k?"Win":"Lose")<<endl;
    }
	return 0;
}
