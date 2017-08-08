// codeforces268a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr1[n+4],arr2[n+4];
	int count=0;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr1[i]>>arr2[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr1[i]==arr2[j]&&i!=j)
			{
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}