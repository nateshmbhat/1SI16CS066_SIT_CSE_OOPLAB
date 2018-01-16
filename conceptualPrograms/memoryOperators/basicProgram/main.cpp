#include<bits/stdc++.h>

using namespace std ; 

int main(void)
{
	int * a = new int ; 
	cout<<"Enter the value of a : "  ; cin>>*a ; 
	cout<<" a = " <<*a<<endl ;   

try{

	int size ; 
	cout<<"Enter size : " ; 
	int *arr = new int[size] ;
	1/0 ; 
	
	cout<<"This shouldnt execute ! " ; 
	for(int i=0 ; i<size ; i++)
			  {cin>>arr[i] ; } 

	}

	catch(const exception &e)
	{
		cout<<"Exception occured ! " <<e.what() ; 
	}

}

