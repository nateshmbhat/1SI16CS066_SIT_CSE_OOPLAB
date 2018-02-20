#include<bits/stdc++.h>

using namespace std ; 

class myclass{
	private : 
		int i ;  

	public : 
		myclass(int) ;
		int show_i(){return i  ;}

} ;

myclass::myclass(int a){i = a ; }

int main()
{
	myclass obj(10) , *p ; 
	myclass arr[2]  = { myclass(2) , myclass(3) } ; 
	p = arr ; 

	for(int i =0 ; i< 2 ; i++)
	{
		cout<<p->show_i()<<endl ; 
		p++ ; 
	}
}
