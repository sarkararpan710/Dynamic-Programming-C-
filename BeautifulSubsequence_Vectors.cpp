#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int max(int, int);

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,max_seq,l,size;
	    cin>>size;
	    vector<int>a(size),b(size,1);
	    for(i=0;i<size;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    for(i=1;i<size;i++)
	    {
	        for(j=0;j<i;j++)
	        {
	            if(a[j]%a[i]==0||a[i]%a[j]==0)
	            {
	            b[i]=max(b[i],b[j]+1);
	            }
	        }
	    }
	    max_seq=*max_element(b.begin(),b.end());
	   
	    if(max_seq==1)
	    cout<<"-1\n";
	    else
	    cout<<max_seq<<"\n";
	}
	return 0;
}

int max(int a, int b)
{
	return (a>b)? a:b;
}
