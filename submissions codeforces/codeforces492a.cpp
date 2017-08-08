// codeforces492a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i=1,ct=0;
	while(ct<=n){
		ct+=i*(i+1)/2;
		i++;
		// cout<<ct;
	}
	cout<<i-2;
	return 0;
}