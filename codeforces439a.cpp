#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,d,sum=0;
	cin>>n>>d;
	int t=n;
	while(t--){
		int i;
		cin>>i;
		sum+=i;
	}
	if(d<sum+(n-1)*10){
		cout<<-1;
		return 0;
	}
	else{
		d=d-sum;
		cout<<d/5;
	}
	return 0;
}