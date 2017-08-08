#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int boys[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>boys[i];
	}
	int m;
	cin>>m;
	int girls[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>girls[i];
	}
	sort(boys,boys+n);
	sort(girls,girls+m);
	int ans=0;
	
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			if(girls[j]<=boys[i]+1 && girls[j]>=boys[i]-1){
				ans++;
				girls[j]=-1023;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}