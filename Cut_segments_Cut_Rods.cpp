#include<iostream>
#include<climits>
using namespace std;

int max(int , int );
int cut_segments( int *segments , int length)
{
    if(length<=0)
        return 0;
    
    int cutting_operations = INT_MIN;
    
    for(int i=0; i<length; i++)
    {
        cutting_operations = max(cutting_operations, segments[i] + cut_segments( segments,length-i-1));
    }
    
    return cutting_operations;
}

int max(int a, int b)
{
	return (a>b)? a:b;
}

int main()
{
	int n;
	cout<<"Enter the size of the list"<<endl;
    cin>>n;
	cout<<"Enter the list of segement lengths"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	
	cout<<cut_segments(arr, n);
    
}
