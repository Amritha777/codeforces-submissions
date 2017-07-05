// codeforces25a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 1; i < n-1; ++i)
	{
		if(arr[i]%2!=arr[i+1]%2&&arr[i-1]%2!=arr[i]%2){
			cout<<i+1;
			return 0;
		}
	}
	if(arr[0]%2!=arr[1]%2){
		cout<<1;
	}
	else if(arr[n-2]%2!=arr[n-1]%2){
		cout<<n;
	}
	return 0;
}