#include<bits/stdc++.h>
using namespace std ; 

class celestial{
	protected: double size ; 
	public : 
	celestial(double) ;
} ; 

celestial::celestial(double h) : size(h) {cout<<"\nCelestial constructor called . " ; } 


class planet:public celestial{
	protected: double orbit_time ;
public:
	planet(double o , double s):orbit_time(o) ,celestial(s){ cout<<"\nPlanet constructor called . ";}
};


class earth:public planet{
	private : unsigned long population ;
	public : 
	earth() ; 
};


earth::earth():population(30000) , planet(1 , 30000){
	cout<<"\nEarth constructor called ! " ; 
	cout<<"\nPopulation = " <<population <<" orbit_time = " <<orbit_time <<" size = " <<size ; 
}


int main(void)
{
	earth Oo_oO ;
}