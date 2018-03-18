#include<iostream>
using namespace std;


//m is the number of coins and n is the amount
//change 
int count(int S[],int m, int n)
{
	if(n==0)
		return 1;//base case
	
	if(n<0)
		return 0;//if n is less than 0 or no amount of change specified
	
	if(m<=0 && n>=1)
		return 0;
		
	return count(S, m-1, n) + count(S, m, n-S[m-1]);			
}

int main()
{
	
	int n,m;
	cin>>n>>m;
	int c[m];
	
	for(int i=0;i<m;i++)
	{
		cin>>c[i];
	}
	
	cout<<count(c,m,n);
}
