#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	double a,b;
	cin>>a>>b;
	cout<<(int)(log(b/a)/log(1.5))+1;
	return 0;
}