// codeforces723a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int x1,x2;
	cin>>x1>>x2;
	int a=max(x1,x2);
	int b=min(x1,x2);
	cout<<b<<" ";
	cout<<(a-b)/2;
	return 0;
}