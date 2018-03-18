#include<iostream>
#include<cstring>
using namespace std;

int min(int, int ,int);

int editdist(char str1[],char str2[], int m, int n)
{
	if(m==0)
		return n;
	if(n==0)
		return m;
	
	if(str1[m-1] == str2[n-1])
		return editdist(str1,str2,m-1,n-1);
	
	return 1+min(editdist(str1,str2,m,n-1),
				editdist(str1,str2,m-1,n),
				editdist(str1,str2,m-1,n-1));			
	
}

int min(int a,int b,int c)
{
	return min(min(a,b),c);
}

int main()
{
	int T;//test cases
	cin>>T;
	int P,Q;
	char str1[100],str2[100];
	for(int i=0;i<T;i++)
	{
		cin>>P>>Q;
		
		
	for(int j=0;j<P;j++)
	{
		cin>>str1[j];
	}
	
	for(int k=0;k<Q;k++)
	{
		cin>>str2[k];
	
	}
	
	cout<<editdist(str1,str2,P,Q)<<"\n";
	}
	
	
	
	
}
