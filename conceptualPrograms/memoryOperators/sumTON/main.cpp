#include<bits/stdc++.h>

using namespace std ; 

int main(void)
{
	int n ; 
	cout<<"Enter n : " ; cin>>n ; 

	int *arr = new int[n] ; 

	for(int i =0 ; i<n ; i++)
		cin>>arr[i] ; 
	
	int sum = 0 ; 
	for(int i =0 ; i<n ; i++)
		sum+=arr[i] ; 


	cout<<endl<<endl<<"Sum = "<<sum ; 


}

