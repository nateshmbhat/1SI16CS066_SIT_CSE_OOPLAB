#include<bits/stdc++.h>

using namespace std ; 

int & fnFindMax(int &a , int& b) ; 

int main(void) 
{
	int a = 10 , b = 30 ;
	cout<<" a= "<<a <<" b = "<<b ; 
	fnFindMax(a , b)  = 0 ; 
	cout<<"\n\nAfter returning and assinging 0 : a = " <<a <<" b = "<<b ; 
}

int& fnFindMax(int &a  , int &b)
{
	return a>b?a:b ; 
}
