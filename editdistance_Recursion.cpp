#include<iostream>
#include<cstring>
using namespace std;

int min(int,int,int);
int editdistance(string str1, string str2, int size1, int size2)
{
	if(size1==0)
		return size2;
	if(size2==0)
		return size1;
	
	if(str1[size1-1] == str2[size2-1])
	{
		return editdistance(str1,str2,size1-1,size2-1);
	}
	
	return 1 + min(editdistance(str1,str2,size1-1,size2),
					editdistance(str1,str2,size1,size2-1),
					editdistance(str1,str2,size1-1,size2-1));
		
}

int min(int a, int b, int c)
{
	return min(min(a,b),c);
}

int main()
{
	
	string str1, str2;
	cout<<"Enter the 2 strings";
	cin>>str1>>str2;
	int m,n;
	m=str1.length();
	n=str2.length();
	
	cout<<"The number of times string has been modified to get both strings to be the same is\n"<<editdistance(str1,str2,m,n);
}
