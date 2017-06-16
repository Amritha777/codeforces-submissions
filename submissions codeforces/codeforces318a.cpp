// codeforces318a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,k;
	cin>>n>>k;
	k-=n%2;
	if(k>n/2){
		k-=n/2;
		cout<<2*k;
		return 0;
	}
	cout<<(n%2==0?(2*k)-1:2*k+1);
	return 0;
}