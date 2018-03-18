#include<iostream>
#include<vector>
using namespace std;


int binary_search(vector<long> &V, int l, int r,int key)
{
	while(r-l > 1)
	{
		int m = l + (r-l)/2;
		if(V[m] >= key)
			r=m;
		else
			l=m;	
	}
	return r;
}

int longest_inc_subseq(vector<int> V)
{
	if(V.size() == 0)
		return 0;
	
	vector<long int> lis(V.size(),0);
	int length = 1;//initialize the length of the longest increasing subsequence is 1 initially
	
	lis[0] = V[0];
	for(int i=0;i<V.size();i++)
	{
		if(V[i]<lis[0])
			lis[0] = V[i];
		else if(V[i] > lis[length-1])
				lis[length++] = V[i];
		else
			lis[binary_search(lis, -1, length-1,V[i])] = V[i];	
						
	}
	
	return length;
		
}

int main()
{
	long int n;
	cin>>n;
	long int arr[n];
	
	vector<long > V;
	
	for(long int i=0;i<n;i++)
	{
		cin>>arr[i];	
		V.push_back(arr[i]);
	}
	
	cout<<longest_inc_subseq(V);
	
	
}
