#include<iostream>
#include<algorithm>
using namespace std;

int longest_inc_subsequence(int arr[],int length)
{
    int *lis;
    lis = new int [length];
    int max=0;
    for(int i=0;i<length;i++)
    {
        lis[i]=1;//base case
    }
    
    for(int i=0;i<length;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
            
        }
    }
    
    for(int i=0;i<=length;i++)
    {
        if(lis[i]>max)
            max=lis[i];
    }
    
    delete(lis);
    
    return max;    
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<longest_inc_subsequence(arr,n)<<endl;
}



