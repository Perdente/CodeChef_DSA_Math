//https://www.geeksforgeeks.org/find-the-nearest-smaller-numbers-on-left-side-in-an-array/
//https://www.codechef.com/LRNDSA02/problems/CHFQUEUE
/*
Question(Make the array in non decreasing order and multiply the (upper-lower+1) each time erasing.
Algorithm-
1.Use a stack pair to store the value and indices (stack-poping out the last element).
2.if new value is less then the top of stack then pop out the element and multiply the sum(upper-lower+1).
3.if stack is empty then end the process.
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N=1e5+5;
const int mod=1e9+7;

signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    {
        cin>>v[i];
    }
    stack<pair<int,int>>st;
    int ans=1;
    for(int i=0;i<n;++i)
    {
    	if(st.empty())
    	{
    		st.push({v[i],i});
		}
		else
		{
			int cur=v[i];
			if(cur<st.top().first)
			{
				while(cur<(st.top().first))
				{
					ans*=(i-(st.top().second)+1);
					ans%=mod;
					st.pop();
					if(st.empty())break;	
				}
			}
			st.push({cur,i});
		}
	}
	cout<<ans<<endl;
	return 0;
}
