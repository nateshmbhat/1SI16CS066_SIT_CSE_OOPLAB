#include<bits/stdc++.h>

using namespace std ; 

class FractionType
{
	int num , den ; 

	public : 

	FractionType(FractionType& obj) //const
	{
		cout<<"copy constructor called : " ; 

		num = obj.num ; 
		den = obj.den ; 
	}

	FractionType(int n)
	{
		cout<<"constructor with 1 param " ; 
		num =  n ;
	}

	FractionType(int n , int d)
	{
		num = n   , den = d ; }

	FractionType(void)
	{
		num = 0 ; den = 1 ; 
	}

	void display(void)
	{
		cout<<"fraction = " <<num <<"/"<<den<<endl; 
	}

	void setter(int a, int b)
	{
		num = a  , den = b ; } 

	int getn()
	{return num ; }

	int getd(){return den ; } 
} mainobj(10,12)  ;


int main(void)
{
	mainobj.display() ; 	
	mainobj.setter(1 , 2) ; 
	mainobj.display() ; 

	FractionType obj(mainobj) ; 
}
