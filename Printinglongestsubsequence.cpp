#include<iostream>
using namespace std;

int max(int, int);
int LCS(char *X, char *Y, int m, int n)
{
	char L[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
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
int index = L[m][n];
char LCS[index+1];
LCS[index]='\0';

int i=m;
int j=n;

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
cout<<LCS<<" ";
}

int max(int a, int b)
{
	return (a>b) ? a:b;
}

int main()
{
	int sizex,sizey;
	cout<<"Enter the size of the 2 strings"<<endl;
	cin>>sizex>>sizey;
	cout<<"Enter 2 strings";
	int i,j;
	char X[sizex],Y[sizex];
	for(i=0;i<sizex;i++)
	{
		cin>>X[i];
	}
	for(j=0;j<sizey;j++)
	{
		cin>>Y[j];
	}
	
	LCS(X,Y, sizex, sizey);
}
