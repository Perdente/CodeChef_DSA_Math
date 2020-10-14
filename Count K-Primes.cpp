#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mx=1e5+5;

int primes[mx];
void factors()
{
    primes[0]=primes[1]=0;
    for(int i=2;i<mx;++i)
    {
        if(primes[i]==0)
        {
            for(int j=i;j<mx;j+=i)primes[j]++;
        }
    }
    // for(int i=1;i<=30;++i)
    // {
    //     cout<<primes[i]<<" ";
    // }
}

signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    factors();
    while(t--)
    {
        int n,m,k;cin>>n>>m>>k;
        int cnt=0;
        for(int i=n;i<=m;++i)
        {
            if(primes[i]==k)cnt++;
        }
        cout<<cnt<<endl;
    }
	return 0;
}
