// codeforces136a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n+5];
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		arr[a-1]=i;
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]+1<<" ";
	}

	return 0;
}