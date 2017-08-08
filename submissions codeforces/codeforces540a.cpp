// codeforces540a.cpp
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	string a,b;
	cin>>n>>a>>b;
	long int ans=0;
	for (int i = 0; i < n; ++i)
	{
		ans+=min((int)abs(a[i]-b[i]),min(10+a[i]-b[i],10-a[i]+b[i]));
	}
	cout<<ans;
	return 0;
}