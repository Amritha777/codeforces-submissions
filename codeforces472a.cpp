// codeforces472a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int t;
	cin>>t;
	if(t%2==0){
		cout<<4<<" "<<t-4;
	}
	else
	{
		cout<<9<<" "<<t-9;
	}

	return 0;
	
}