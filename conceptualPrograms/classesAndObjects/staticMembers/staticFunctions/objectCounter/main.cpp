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

Myclass::Myclass()
{
	cout<<"\nCount ++ " ; 
	count ++ ; 	
}

Myclass::~Myclass()
{
	cout<<"\nCount --  "  <<endl; 
	count-- ; 
}

int main()
{

	Myclass obj  , obj1 ; 
	

}
