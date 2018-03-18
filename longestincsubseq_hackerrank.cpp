#include<iostream>
using namespace std;

int longest_inc(int arr[], int length)
{
    int *lis;
    int max = 0;
    lis = new int [length];
    for(int i=0;i<length;i++)
    {
        lis[i]=1;//base case, initially all the entries will be one  
    }
    
    for(int i=1;i<length;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i]<lis[j+1])
                lis[i] = lis[j]+1;
        }
    }
    
    for(int i=0;i<length;i++)
    {
        if(lis[i]>max)
            max = lis[i];
    }
    
    delete (lis);
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
    cout<<longest_inc(arr, n);
}
