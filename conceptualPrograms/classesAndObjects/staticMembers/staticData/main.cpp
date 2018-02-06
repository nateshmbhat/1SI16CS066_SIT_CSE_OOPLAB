#include<bits/stdc++.h>

using namespace std ; 

class Myclass{

	private: 
	static int  a ; 
	
	public : 
	static int getval()
	{
		return a; 
	}
}; 

int Myclass::a ; 

int main()
{
	Myclass obj ; 
	cout<<" val = " <<obj.getval()  ; 
	
}
