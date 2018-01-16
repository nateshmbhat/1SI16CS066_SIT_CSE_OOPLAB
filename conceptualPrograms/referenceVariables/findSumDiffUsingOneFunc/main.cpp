#include<bits/stdc++.h>

using namespace std ; 

void calc(int a  , int b   , int &sum , int &diff)
{
	sum = a+b ; diff = a-b ; 
}

int main(void)
{
	int a = 0 , b = 20 ; 
	int sum , diff ; 

	cout<<"Enter a and b : "  ; cin>>a >>b ; 
	calc( a, b, sum , diff) ; 
	cout<<endl; 
	cout<<"sum = " <<sum <<" diff = "<<diff ; 

}
