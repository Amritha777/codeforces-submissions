// codeforces617a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<n/5+((n%5!=0)?1:0);
	return 0;
}