#include<bits/stdc++.h>

using namespace std ; 

void swap(int & a , int & b)
{ int t = a ; a= b ; b = t ; }

int main(void)
{
		  int a , b   ; 
		  cout<<"Enter a and b : " <<endl ;
		  cin>>a >> b ; 
		  cout<<"Before swap a = " <<a << " b = " << b <<endl ; 
		  swap(a , b)   ; 
		  cout<<"After swap a = " <<a <<" b = " << b <<endl ; 

}
	
