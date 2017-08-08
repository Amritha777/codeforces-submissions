#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	vector<long long int> v;
	cin>>n;
	int t=n;
	while(t--){
		int i;
		cin>>i;
		v.push_back	(i);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cout<<min(abs(v[i]-v[i+1]),abs(v[i]-v[i-1]))<<" ";
		cout<<max(abs(v[i]-v[0]),abs(v[i]-v[n-1]))<<endl;
	}
	return 0;
}