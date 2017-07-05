// codeforces677a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,h,ans=0;
	cin>>n>>h;
	while(n--){
		cin>>t;
		if(t>h)
			ans+=2;
		else
			ans+=1;
	}
	cout<<ans;
	return 0;
}