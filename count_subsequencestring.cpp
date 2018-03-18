#include<iostream>
using namespace std;

int count(string str1,string str2,int m, int n)
{
	
}

int main()
{
	string str1,str2;
	cin>>str1>>str2;
	int m,n;
	m=str1.length();
	n=str2.length();
	
	cout<<"The number of times a string occurs as a subsequence in a given string"<<count(str1,str2,m,n);
}
