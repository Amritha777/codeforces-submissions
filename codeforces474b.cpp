#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	long long int temp=0;
	long long int arr[n];
	for (int i = 0; i < n; ++i)
	{
		int t;
		cin>>t;
		arr[i]=t+temp;
		temp=arr[i];
		// cout<<arr[i];
	}
	long long int t;
	cin>>t;
	// cout<<t;
	// t++;
	while(t--){
		long long int q;
		cin>>q;
		// cout<<q;	
		long long int low=0;
		long long int high=n;
		long long mid=low+((high-low)/2);
		while(low<high){
			if(arr[mid]>q){
				high=mid-1;
				mid=low+((high-low)/2);
			}
			else if(arr[mid]<q){
				low=mid+1;
				mid=low+((high-low)/2);
			}
			else{
				cout<<mid+1<<endl;
				break;
			}
		}
		if(low==high){
			if(arr[high]<q){
				cout<<high+2<<endl;
			}
			else{
				cout<<high+1<<endl;
			}
		}
		if(low>high){
			cout<<low+1<<endl;
		}
	}
	return 0;
}