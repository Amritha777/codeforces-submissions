// codeforces144a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	int max=0;
	int min=1000;
	int posMax=0;
	int posMin=n-1;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if(arr[i]>max){
			max=arr[i];
			posMax=i;
		}
		if(arr[i]<=min){
			min=arr[i];
			posMin=i;
		}
	}
	if (posMin<posMax){
		cout<<posMax+n-1-posMin-1;
	}
	else
		cout<<posMax+n-1-posMin;
	return 0;

}