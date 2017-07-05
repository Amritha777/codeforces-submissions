// codeforces460a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int ans=n+(n/(m-1));
	ans-=(n%(m-1)==0?1:0);
	cout<<ans;
	return 0;
}