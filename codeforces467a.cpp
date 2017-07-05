//codeforces467a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	int sum=0;
	int p,q;
	cin>>t;
	while(t--){
		cin>>p>>q;
		p=(q-p>=2)?sum++:1;
	}
	cout<<sum;
	return 0;
}