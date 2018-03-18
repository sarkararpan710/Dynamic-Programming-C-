#include<iostream>
#include<vector>
using namespace std;

int max(int, int);
void longest_Common_subsequence(vector<int> &X, vector<int> &Y,int length1,int length2)
{
	
	int L[length1+1][length2+1];
	for(int i=0;i<=length1;i++)
	{
		for(int j=0;j<=length2;j++)
		{
		
	if( i==0||j==0)
		L[i][j] = 0;
	
	else
		if(X[i-1] == Y[j-1])
			L[i][j] = 1 + L[i-1][j-1];
	else
		if(X[i-1] != Y[j-1])
			L[i][j] = max(L[i-1][j],L[i][j-1]);
	
			
					
}
}
int index = L[length1][length2];
vector<int> LCS(index,1);

int i=length1;
int j=length2;

while(i>0 && j>0)
{
	if(X[i-1] == Y[j-1])
	{
		LCS[index-1] = X[i-1];
		i--;j--;index--;
	}
	else if(L[i-1][j] > L[i][j-1])
			i--;
		 else
			j--;
}

for(int i=0;i<LCS.size();i++)
	cout<<LCS[i]<<" ";
}

int max(int a, int b)
{
	return (a>b) ? a:b;
}

int main()
{
	int n,m;
	cin>>n>>m;
	int i,j;
	int X[n],Y[m];
	vector<int>V;
	vector<int>U;
	for(i=0;i<n;i++)
	{
		cin>>X[i];
		V.push_back(X[i]);
	}
	
	for(j=0;j<m;j++)
	{
		cin>>Y[j];
		U.push_back(Y[j]);
	}
	
	longest_Common_subsequence(V,U,n,m);
}
