// codeforces492b.cpp
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,l;
	cin>>n>>l;
	double arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	double ans=-1e9;
	for (int i = 1; i < n-1; ++i)
	{
		ans=max(ans,(max(arr[i]-arr[i-1],arr[i+1]-arr[i])/2));
	}
	if (arr[0]>ans){
		ans=arr[0];
	}
	if (l-arr[n-1]>ans){
		ans=l-arr[n-1];
	}
	if(n==2)
		if((arr[n-1]-arr[0])/2>ans)
			ans=(arr[n-1]-arr[0])/2;
	cout<<setprecision(10)<<ans;
	
	return 0;
}