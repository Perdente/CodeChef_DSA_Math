//https://www.codechef.com/LRNDSA05/problems/CHEFSQRS/
//https://www.geeksforgeeks.org/find-smallest-perfect-square-number-a-such-that-n-a-is-also-a-perfect-square-number/?ref=rp

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define const int mx=1e5+5;
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,mi=9e18;cin>>n;
        for(int i=1;i*i<=n;++i)
        {
            if(n%i==0)
            {
                int a=i,b=n/i;
                if((b-a)!=0 and (b-a)%2==0)
                {
                    mi=min(mi,(b-a)/2);
                }
            }
        }
        if(mi!=9e18)cout<<mi*mi<<endl;
        else cout<<-1<<endl;
    }
	return 0;
}
