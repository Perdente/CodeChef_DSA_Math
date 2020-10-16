//https://www.codechef.com/LRNDSA02/problems/ZCO12002
#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N=1e5+5;
const int mod=1e9+7;

bool comp(pair<int,int> a, pair<int,int>b)
{
	return (a.second-a.first<=b.second-b.first);
}

signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,v,w,x;cin>>n>>v>>w;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;++i)
    {
        int x,y;cin>>x>>y;a[i]={x,y};
    }
    sort(a.begin(),a.end(),comp);
    vector<int>V,W;
    
    while(v--)cin>>x,V.push_back(x);
    while(w--)cin>>x,W.push_back(x);
    sort(V.begin(),V.end());
    sort(W.begin(),W.end());
    int time=9e18;
    for(int i=0;i<n;++i)
    {
    	if(a[i].second-a[i].first>=time)break;
    	auto intime=lower_bound(V.begin(),V.end(),a[i].first);
    	auto outtime=lower_bound(W.begin(),W.end(),a[i].second);
    	if(*intime!=a[i].first or intime==V.end())intime--;
    	if(outtime==W.end())continue;
    	time=min(time,(*outtime-*intime+1));
	}
    cout<<time<<endl;
	return 0;
}
