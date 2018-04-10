#include<bits/stdc++.h>

class baseclass
{
	int x , y ; 

	public : 
	baseclass(int , int) ; 
	void showval(){
		cout<<" x = " <<x <<" y = " <<y ; 
	}
};


class derived
{
	int k , j , x  ;
};

baseclass::baseclass(int a , int b ):x(a ) , y(b) {} 


int main(void)
{
	baseclass bobj(1 , 2) ; 
	bobj.showval() ; 
}