#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define loop(i, n) for (int i = 1; i <= n; i++)
#define pb push_back
#define mod 1000000007
#define ASCII_SIZE 256
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
std::vector<ll>v[100001] ;
int vis[100001];
int dis[1000001];


/* jai baba vishwanath 
   prakash pandey
*/   
void dfs(int node,int d)
{
    vis[node]=1;
    dis[node]=d;
    for(int child:v[node])
    {
        
        if(vis[child]==0)
        {
            
            dfs(child,dis[node]+1);
        }
        //cout<<cnt<<"*"<<"\n";
    }
    
}

 int main()
{
    
  int n;
  cin>>n;
  int m=n-1;
  while(m--)
  {
      int a,b;
      cin>>a>>b;
      v[a].pb(b);
      v[b].pb(a);
  }
  dfs(1,0);
  int sum=0;
  for(int i=1;i<=n;i++)
  {
      sum=sum+dis[i];
  }
  cout<<sum+n;
  
  

 }