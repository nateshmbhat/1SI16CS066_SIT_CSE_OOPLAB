
#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>

using namespace std ; 

class baseclass
{
	public : 
	int x , y ; 

	baseclass(int , int) ; 
	void showval(){
		cout<<" x = " <<x <<" y = " <<y ; 
	}
};


class derived:virtual public baseclass
{
	public : 
	int k , j , x  ;
	public : 
	derived(int a , int b):baseclass(a , b)
	{
		a = k , j = b ; 
	}
};


baseclass::baseclass(int a , int b ):x(a ) , y(b) {} 


int main(void)
{
	 derived dobj(1 , 2) ; 
	 baseclass bobj(1 , 2) ; 
	 bobj = dobj ; 
	bobj.showval() ; 

	cout<<"\n\nprinting ..." <<endl;
	cout<<dobj.baseclass::x ; 
	cout<<"--end print--" <<endl; 
	cout<<endl<<sizeof(dobj) <<endl;

}