#include<bits/stdc++.h>
using namespace std ; 

class Location
{
	int iY , iX ; 
	
	public : 

	void fnSetLoc(int  , int) ; 
	void fnShowLoc() const ; 
	void fnDistOrigin() const ; 
	void fnDist(Location L) const ; 

}; 

void Location::fnSetLoc(int x  , int y )
{
	iY = y ;
	iX = x ; 
}

void Location::fnShowLoc() const
{
	cout<<"X = "<<iX <<" Y = "<<iY <<endl ; 
}

void Location::fnDistOrigin() const
{
	cout<<"Distance from origin  = " <<sqrt(iY*iY+ iX *iX)<<"\n" ; 
}

void Location::fnDist(Location L ) const
{
	cout<<"Distance  = " <<sqrt(pow(iY-L.iY , 2) + pow(iX-L.iX , 2) ) <<endl ; 
}


int main(void)
{
	
	Location L , L1 ;
	L.fnSetLoc(10 , 20 ) ; 
	L.fnShowLoc() ; 
	L1.fnSetLoc(5 , 10) ; 
	L1.fnShowLoc() ; 
	L.fnDistOrigin() ; 
	L.fnDist(L1) ; 

}

