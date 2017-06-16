// codeforces344a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int curr,prev;
	cin>>prev;
	t--;
	int ans=1;
	while(t--){
		cin>>curr;
		if (curr!=prev)
			ans++;
		prev=curr;
	}
	cout<<ans;
	return 0;
}