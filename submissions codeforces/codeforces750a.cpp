// codeforces750a.cpp
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{	

	int arr[12];
	arr[0]=0;
	arr[1]=5;
	for (int i = 2; i <=10; ++i)
	{
		arr[i]=5*i+arr[i-1];
	}

	int n,t;
	cin>>n>>t;
	int i;
	for (i = 1; arr[i]+t<=240&&i<=n; ++i)
	{
	}
	cout<<i-1;
	return 0;
}