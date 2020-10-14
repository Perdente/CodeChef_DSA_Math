//https://www.codechef.com/LRNDSA05/problems/CHEFPRMS/

#include<bits/stdc++.h>
using namespace std;
#define int long long int


vector<bool>isPrime(1005,true);
void Seive()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=1005;++i)
    {
        if(isPrime[i] and i*i<=1005)
        {
            for(int j=i*i;j<=1005;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    // for(int i=2;i<=1005;++i)
    // {
    //     if(isPrime[i])cout<<i<<" ";
    // }
}


signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    
    while(t--)
    {
        int n;cin>>n;
        Seive();
        bool flag=false;
        for(int i=2;i<=n;++i)
        {
            for(int j=i+1;j<=n;++j)
            {
                if(isPrime[i] and isPrime[j])
                {
                    int temp=n-(i*j);
                    for(int k=2;k*k<=temp;++k)
                    {
                        if(temp%k==0 and k!=(temp/k) and isPrime[k] and isPrime[temp/k] and !flag)
                        {
                            //cout<<i<<" "<<j<<" "<<k<<" "<<temp/k<<endl;
                            flag=true;
                            cout<<"YES"<<endl;
                        }
                    }
                }
            }
        }
        if(!flag) cout<<"NO"<<endl;
       
    }
	return 0;
}
