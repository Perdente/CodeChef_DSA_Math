//https://www.codechef.com/LRNDSA05/problems/FIBEASY
#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mx=1e5+5;
const int mod=1e9+7;

signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    int fib[60];
    fib[0]=0,fib[1]=1;
    for(int i=2;i<60;++i)fib[i]=(fib[i-1]%10+fib[i-2]%10)%10;
    while(t--)
    {
        int n;cin>>n;
        int temp=1;
        while(n>1)temp*=2,n/=2;
        cout<<fib[(temp-1)%60]<<endl;
    }
	return 0;
}
