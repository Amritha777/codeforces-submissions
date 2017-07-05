// codeforces432a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if (arr[i]+k<=5){
			count++;
		}
	}
	cout<<count/3;
	return 0;
}