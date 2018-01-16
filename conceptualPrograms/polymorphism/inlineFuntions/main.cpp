#include<bits/stdc++.h>

using namespace std ; 

inline double fnCalcCirc(double) ; 
inline double funCalcArea(double) ; 

int main(void)
{
	double r ; 
	cout<<"Enter radius : "  ; cin>>r ; 
	cout<<"Area  =  "<<funCalcArea(r) ; 
	cout<<endl<<"Circ = "<<fnCalcCirc(r) ; 

}

inline double fnCalcCirc(double r){return 2*M_PI*r; }
inline double funCalcArea(double r){return M_PI*r*r ;  } 
