// codeforces500a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;
	int arr[n];
	arr[0]=0;
	for (int j = 0; j < n-1; ++j)
	{
		cin>>arr[j];
	}
	bool visit=false;
	int i=0;
	while(visit!=true&&i<n-1){
		if (i==t-1)
		{
			visit=true;
			break;
		}
		i=i+arr[i];
	}
	if (i==t-1)
	{
		visit=true;
	}
	cout<<(visit==1?"YES":"NO");
	return 0;
}