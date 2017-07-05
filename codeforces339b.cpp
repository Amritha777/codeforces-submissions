// codeforces339b.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,m;
	cin>>n>>m;
	// long long int arr[n];
	long long int a=1,b,ans=0;
	for (int i = 0; i < m; ++i)
	{
		cin>>b;
		if(b>=a){
			ans+=b-a;
		}
		else{
			ans+=n-a+b;
		}
		a=b;
	}
	cout<<ans;
	return 0;
}