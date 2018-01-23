#include<bits/stdc++.h>
using namespace std ; 

int main(void)
{
	int i = 10 ; 
	int * p = &i ; 
	const int * p1  =&i ; 
	cout << *p << *p1 ; 

	int ** const p2 = (int ** const)&p ;
	const int ** const p3 = (int const ** ) &p ;

	// p2 = 103  NOT ALLOWED 

	// *p1 = 30 NOT ALLOWED
	
	cout<<"*p = " <<*p ; 
	cout<<"\n*p1 = "<<*p1  ; 
	cout<<"\np2 -  **p2  = " <<p2 << "-"<<**p2 ; 
	cout<<"\np3 -  **p3 = " <<p3<<"-" << **p2 ; 

}
