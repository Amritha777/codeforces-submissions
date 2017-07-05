// codeforces337a.cpp
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	sort(arr,arr+m);
	int best=10000;
	for(int i=0;i<m-n+1;i++){
		best=min(best,arr[i+n-1]-arr[i]);
	}
	cout<<best;
	return 0;
}