#include<iostream>
using namespace std;

int max(int,int);
int lcs(char *X ,char *Y,int m,int n)
{
	int L[m+1][n+1];
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
			{
				if(i==0||j==0)
				{
					L[i][j]=0;
				}
				else if(X[i-1] == Y[j-1])
				{
					L[i][j]= L[i-1][j-1] +1;//check last characters if they are equal then add 1 to the length of the new list
				}
				else{
					L[i][j]= max(L[i-1][j],L[i][j-1]);//else if last characters are not equal then check string 1 and string2-1 or string 2 and 
					//string1-1 and get the max of both the options. return the length 
				}
			}
	}
	return L[m][n];
}

int max(int a,int b)
{
	return (a>b) ? a:b;
}
int main()
{
	int sizex,sizey;
	cout<<"Enter the size of string 1 and 2\n";
	cin>>sizex>>sizey;
	char X[sizex]; 
	char Y[sizey] ;
	
	int k,l;
	for(k=0;k<sizex;k++)
		cin>>X[k];
		
	for(l=0;l<sizey;l++)
		cin>>Y[l];	
	
	
	cout<<"The length of the longest common subsequence is\n"<<lcs(X, Y, sizex, sizey);
	return 0;
}
