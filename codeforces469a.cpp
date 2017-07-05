// codeforces469a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,p,q;
	cin>>n;
	cin>>p;

	bool arr[n+1]={false};
	for (int i = 0; i <p; ++i)
	{
		cin>>q;
		arr[q]=true;
	}
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		cin>>p;
		if (!arr[p])
		{
			arr[p]=true;
		}
	}
	for (int i = 1; i < n+1; ++i)
	{
		if(arr[i]==false){
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
		
}