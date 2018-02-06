#include<bits/stdc++.h>

using namespace std ; 

class twoval
{
	friend void swap(twoval &)  ; 
	private : int val1 , val2 ; 

	public : 
	
	void getdata()  ; 
	void printdata() ; 
} ; 

void twoval::getdata(){
	cout<<"Enter two values : " ; 
	cin>>val1 >>val2 ; 

}

void twoval::printdata()
{
	cout<<"\nValues are  = " <<val1 << " " <<val2 ; 
}

void swap(twoval & obj)
{
	int t = obj.val1 ; 
	obj.val1 = obj.val2 ;
	obj.val2 = t ; 
}

main()
{
	twoval obj ; 
	obj.getdata() ; 
	cout<<"\nBefore swap : " ; obj.printdata() ; 
	swap(obj) ; 
	cout<<"\nAfter swap : " ; obj.printdata() ;cout<<"\n" ; 
}
