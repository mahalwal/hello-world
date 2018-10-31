#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[1000000];
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	next_permutation(arr, arr+n);
	for(int i=0; i<n; i++)
		cout << arr[i];
}