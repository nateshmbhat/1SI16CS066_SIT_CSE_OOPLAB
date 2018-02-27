#include<bits/stdc++.h>
using namespace std ; 

class DurationType
{
	int iM , iH , iS ; 	

	public : 

	DurationType(){iH = iM = iS = 0 ; } ; 
	DurationType(int sec )
	{
		iS = sec%60 ;  
		iM = sec/60 ;
		iH = iM/60 ; 
		iM = iM%60 ; 
	}  
	DurationType(int  , int , int) ; 
	friend ostream& operator<<(ostream& , DurationType&) ; 
	friend istream& operator<<(istream& , DurationType&) ; 
	operator int() const ; 
	void operator=(int) ; 
	DurationType operator+(DurationType& D) ; 
} ; 


void DurationType::operator=(int val)
{
	iS = val%60 ; 
	iM = val/60 ; 
	iH = iM /60 ; 
	iM = iM%60 ; 
}


DurationType::operator int() const
{
	return iH*3600+iM*60+ iS ; 
}


DurationType DurationType::operator+(DurationType& D)
{
	return DurationType(D.iS + iS + (iH+D.iH)*3600 + (iM+ D.iM)*60) ; 	
}


ostream& operator<<(ostream& out , DurationType& D)
{
	printf("%02d:%02d:%02d\n\n" , D.iH , D.iM  , D.iS) ; 
	return out; 
}


istream& operator<<(istream&  in, DurationType& D)
	{
		cout<<"Enter hour , min , seconds : "  ; 
		cin>>D.iH >>D.iM >>D.iS ; 
		return in ; 
	}


DurationType::DurationType(int h , int m , int s):iH(h) , iM(m) , iS(s) {} 


int main()
{
	DurationType d1 , d3 , d2(20000) ; 
	int time ; 
	cin.get() ; 
	d1 = 10000 ; 
	d3 = d1+ d2 ; 
	time = d3 ; //class to basic type 
	cout<<"\nDuration 1 " <<d1 ; 
	cout<<d2<<d3 ; 
	cout<<"\nTotal time in seconds = " <<time ; 
}
