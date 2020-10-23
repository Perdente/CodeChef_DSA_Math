//https://codeforces.com/contest/1354/problem/B
//similar-not a flavour
#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N=1e5+5;
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        map<char,int>mp;
        int lb=0,ans=1e9;
        for(int ub=0;ub<s.size();++ub)
        {
            mp[s[ub]]++;
            while(mp[s[lb]]>1)
            {
                mp[s[lb]]--,lb++;
            }
            if(mp.size()==3)ans=min(ans,ub-lb+1);
        }
        cout<<(ans==1e9?0:ans)<<endl;
    }
	return 0;
}
