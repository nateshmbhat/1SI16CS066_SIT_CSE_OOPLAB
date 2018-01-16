#include<bits/stdc++.h>
using namespace std ; 

int main(void)
{
	srand(time(NULL)) ; 
	int period = 12 ; 
	int *arr = new int[period] ; 
	float avg=0 , sd , var=0 ; 

	cout<<"Enter no of months : " ; cin>>period ; 
	for(int i =0 ; i<period ; i++)
	{

		arr[i] = rand()%21+20 ;
		cout<<arr[i] <<" " ; 
		avg+=arr[i] ; 
	}
	cout<<endl; 

	avg/=period ; 

	for(int i =0 ; i<period ; i++)
		var+=pow(arr[i]-avg  , 2) ; 

	var/=period ; 
	sd = sqrt(var) ; 

	cout<<"Average : "<< avg <<" Variance : "<<var << " Sd : "<<sd ; 
	
	
}
	

