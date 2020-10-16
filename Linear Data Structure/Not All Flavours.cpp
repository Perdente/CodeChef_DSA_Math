//https://www.codechef.com/LRNDSA02/problems/NOTALLFL
/*
Algorithm:
1.First,we create two vectors to store sequence [1 1 1 2 2 1] and frequency [0,4,2,0,0,0].
2.We increment the upper bound (iterator i) until unique elements equals k.(if frequncy of an element is >0 this increment unique) 
3.If unique element is greater or equals k this means we need to decreament lower bound untill unique element < k.
4.Finally answer is the maximum of all (upper bound - lower bound + 1).
*/

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
        int n,k,x;cin>>n>>k;
        vector<int>seq,freq(n+1,0);
        for(int i=0;i<n;++i)
        {
            cin>>x;
            seq.push_back(x);
        }
        int ans=0,uniq=0,lb=0;
        for(int ub=0;ub<n;++ub)
        {
            if(freq[seq[ub]]==0)uniq++;
            freq[seq[ub]]++;
            if(uniq<k and ans<ub-lb+1)
            {
                ans=ub-lb+1;
            }
            while(uniq>=k)
            {
                freq[seq[lb]]--;
                if(freq[seq[lb]]==0)uniq--;
                lb++;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
