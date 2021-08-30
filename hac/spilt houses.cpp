/*
// Sample code to perform I/O:
 
cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define loop(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mod 1000000007
using namespace std;
 
// to find prefix sum of array for(int i=0;i < n;i++)array[i+1]+=array[i];
// to find the maximum elements of vector<<*max_element(v.begin(),v.end());
inline void prakashprogramfaster()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
}/*
void sieve()
{
	for(int i=2;i<=1000000000;i++)
	{
		array[i]=i;
		barray[i]=i;
	}
	array[1]=1;
	barray[1]=1;
	for(int i=2;i<=1000000000;i++)
	{
		array[i]=array[i-1]*array[i];
		barray[i]=barray[1]+barray[i-1];
		
	}
}
*/
void jai_parshuram()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='H' && s[i+1]=='H')
		{
			ans=1;
		}
	}
	if(ans==0)
	{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='.')
			s[i]='B';
		}
		cout<<s<<endl;
	}
	else
	cout<<"NO"<<endl;
	
	
}
 
int main()
{
	prakashprogramfaster();
	
	{
		jai_parshuram();
 
	}
}