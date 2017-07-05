// codeforces451a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int moves=1;
	while (true){
		if (n<=1||m<=1)
			break;
		n--;m--;
		moves++;
	}
	if(moves%2==0)
		cout<<"Malvika";
	else
		cout<<"Akshat";

	return 0;
}