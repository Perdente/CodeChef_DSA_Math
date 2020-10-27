//https://codeforces.com/problemset/problem/1369/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        long long n,m;cin>>n>>m;
        vector<long long>v(n),u(m);
        for(int i=0;i<n;++i)cin>>v[i];
        for(int i=0;i<m;++i)cin>>u[i];
        sort(v.begin(),v.end());
        sort(u.begin(),u.end(),greater<long long>());
        long long sum=0,l=0,r=n-m;
        for(int i=0;i<m;++i)
        {
            if(u[i]==1)
            {
                sum+=v[r]+v[r];
            }
            else
            {
                sum+=v[l]+v[r];
                l+=u[i]-1;
            }
            r++;
        }
        cout<<sum<<endl;
    }
}
