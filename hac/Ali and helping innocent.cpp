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
bool isvowel(char c)
{
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y')
    return true;
    else
    return false;
}

 int main()
{
    
  string s;
  cin>>s;
  int x1=(s[0]-48)+(s[1]-48);
  int x2=(s[3]-48)+(s[4]-48);
  int x3=(s[4]-48)+(s[5]-48);
  int x4=(s[7]-48)+(s[8]-48);
  if(isvowel(s[2]))
  {
      cout<<"Invalid";
  }
  else
  {
      if(x1%2==0 && x2%2==0 && x3%2==0 && x4%2==0 )
      cout<<"Valid";
      else
      cout<<"Invalid";
  }
  
  
  

 }
