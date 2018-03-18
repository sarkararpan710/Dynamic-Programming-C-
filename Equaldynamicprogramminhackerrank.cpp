#include<iostream>
#include<algorithm>
#include<cmath>
#include<limits>
using namespace std;


int equal(int arr[],int N)
{
	int base;
	int difference;
	int current_sum=0;
	int min_operations= INT_MAX;
	for(base=0;base<3;base++)
	{
		current_sum=0;
		for(int i=0;i<N;i++)
		{
			difference = arr[i] - arr[0] + base; 
			current_sum+= difference/5 + difference %5 / 2 +difference %5 %2/1;
		}
		min_operations= min(current_sum, min_operations);
	}
	
		
}


int min(int a, int b)
{
	return (a<b)?a :b;
}

int main()
{
	int T,N;
	cin>>T;
	int arr[999];
	int i,j;
	for(i=0;i<T;i++)
	{
		cin>>N;
		for(j=0;j<N;j++)
		{
			cin>>arr[j];
			
		}
		sort(arr,arr+N);
	cout<<equal(arr,N)<<endl;
	}

	
	
	
}

