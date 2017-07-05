// codeforces200b.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	int n=5,b;
	// cin>>5;
	b=n;
	int t;int sum=0;
	while(n--){
		cin>>t;
		sum+=t;
	}
	cout<<((sum%5==0)&&(sum/5>0)?sum/5:-1);
	return 0;
}