#include<iostream>
#include<algorithm>
using namespace std;


int BCS(int X[] , int size)
{
	int *bis = new int [size];
	int ans =0;
	int max_seq=0;
	for(int i=0;i<size;i++)
		{
			bis[i] =1;
		}
	
	sort(X[0],X[size]);
	for(int i=1;i<size;i++)	
		{
			for(int j=0;j<i-1;j++)
			{
				if(X[i]%X[j] == 0 || X[j]%X[i]==0)
				{
					bis[i] = max(bis[i],bis[j] + 1);	
				}
			}
			if(max_seq > bis[i])
				max_seq = bis[i];
		}
		
if(max_seq == 1)
	return -1;
else
	return max_seq;

}

int max(int a, int b)
{
	return (a>b)?a :b;
}

int main()
{
	int T;//test cases
	cin>>T;
	int arr[100];
	int i,N,j;
	for(i=0;i<T;i++)
	{
		cin>>N;
		for(j=0;j<N;j++)
		{
			cin>>arr[j];
		}
		cout<<BCS(arr, N)<<"\n";
	}
	
	
}
