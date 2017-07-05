#include<iostream>
using namespace std;
int main(){
	long long int n,m,a;
	cin>>n>>m>>a;
	cout<<((n%a==0)?n/a:(n/a)+1)*((m%a==0)?m/a:(m/a)+1);
	return 0;
}