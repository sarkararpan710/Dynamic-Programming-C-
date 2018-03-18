#include<iostream>
#include<cstring>
using namespace std;

int min(int ,int ,int);

int editdist(string str1,string str2,int m, int n)
{
	if(m==0)//if string 1 of size m is 0 then return string2
		return n;
	
	if(n==0)//if string 2 of size n is 0 then return string 1
		return m;
	
	if(str1[m-1] == str2[n-1])//if last characters of both the strings match then recompute for the 2nd last charachters and so on until the characters dont match
		return editdist(str1, str2, m-1 , n-1);
	
	//if the charachters do not match then increase the count by 1 by checking all possible operations
	//str1, str2,m-1,n does the removal, insertion and replace
	return 1+min(editdist(str1,str2,m-1,n),editdist(str1,str2,m,n-1),editdist(str1,str2,m-1,n-1));			
}

int min(int a, int b,int c)
{
	return min(min(a,b),c);
}


int main()
{
	string str1,str2;
	cout<<"Enter the 2 strings";
	cin>>str1>>str2;
	
	cout<<editdist(str1,str2,str1.length(),str2.length());
}
