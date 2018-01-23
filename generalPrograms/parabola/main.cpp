#include<iostream>
#include<bits/stdc++.h>



using namespace std ; 


int main(void)
{
	float a , b, c , x , dx , left , right  ; 
	cout<<"Enter a b c dx and left and right limits : " <<endl ; 
	cin>>a >>b >>c >>dx >> left >>right ; 
	float area = 0 ; 

	for(float x=left ; x<right ; x+=dx)
	{
		area+=(dx* (a*x*x + b*x + c)) ;
	}

	cout<<area<<endl ;  

}
