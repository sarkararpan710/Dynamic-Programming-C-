#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;

int lis(int arr[], int n)
{
	int *lis,i,j, max=0;
	lis = new int [n];
	
	for(int i=0;i<n;i++)
	{
		lis[i]=1;
	}
	
	for(int i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]>arr[j] && lis[i] < lis[j]+1)
				lis[i] = lis[j]+1;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(lis[i]>max)
			max = lis[i];
	}
	delete(lis);
	
	return max;
}

int main()
{
	int size;
	cout<<"Enter the size of the array\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the array whose increasing subsequence you want to find out\n";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The length of the lowest increasing subsequence\n"<<lis(arr , size);
}
