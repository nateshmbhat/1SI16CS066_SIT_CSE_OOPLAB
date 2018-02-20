#include<bits/stdc++.h>

using namespace std ; 

class Myclass
{
	private : 
	static int count ; 

	public : 

	Myclass() ; 
	~Myclass() ; 
} ; 

int Myclass::count ; 

Myclass::Myclass()
{
	cout<<"\nCount ++  : " << count ; 
	count ++ ; 	
}

Myclass::~Myclass()
{
	cout<<"\nCount --  : "<<count  <<endl; 
	count-- ; 
}

int main()
{
	Myclass obj  , obj1 ; 
}
