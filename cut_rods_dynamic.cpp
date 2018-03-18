#include<iostream>
#include<climits>
#include<vector>
using namespace std;


int max(int, int);


int cut_rods(int prices[] , int length)
{

	
	int r[length+1];
	r[0] = 0;
	
	
	int i,j;
	
	for(int i= 1;i<=length;i++)
	{
		int max_price = INT_MIN;
		for (int j=0; j<i;j++)
			{
				max_price = max(max_price, prices[j] + r[i-j-1]);
			}
		r[i] = max_price;
	}
	
	return r[length];
}


int max(int a, int b)
{
	return (a>b) ? a:b;
}

int main()
{
	int n;
	cout<<"Enter the size of the price list"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the prices"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<cut_rods(arr, n);
}
