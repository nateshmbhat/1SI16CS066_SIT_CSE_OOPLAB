#include<bits/stdc++.h>
using namespace std ; 


class Degree
{
	int deg ; 
	public : 

	Degree(){deg = 0 ; }
	Degree(int val )  : deg(val) { } 
	void readDeg(){cin>>deg ; }
	void displayDeg(){cout<<"\nDegree : " <<deg ; }
	int fetchDegVal(){return deg ; }
} ; 


class Radian
{
	float rad ; 
public: 
	Radian(){ rad = 0 ; }
	Radian(float val) : rad(val) {} 
	Radian(Degree D)
	{
		cout<<"\nConstrucutor \n" ;   
		rad = D.fetchDegVal()*M_PI/180 ; 
	}

	operator Degree() const
	{
		return Degree(rad * 180/M_PI) ; 
	} 
	void readRad(){ cin>>rad ; }
	void displayRad(){cout<<rad <<endl; }
} ; 



int main()
{
	Degree D  ; 
	cout<<"Enter angle in degrees : " ;  D.readDeg() ; 
	D.displayDeg() ; 

	cout<<"\nDegree to Radian  "  <<endl; 
	Radian R(D) ; 
	R.displayRad() ; 
	cout<<"Radian to Degree  convert " <<endl; 

	Degree newdeg = R ; 
	newdeg.displayDeg() ; 

	return 0 ; 
}