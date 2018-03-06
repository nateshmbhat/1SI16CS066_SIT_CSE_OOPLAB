#include<bits/stdc++.h>

using namespace std ; 

class Distance
{
	static const float MTF = 3.280833F ; 
	int feet ; 
	float inches ; 

	public : 

	Distance():feet(0) , inches(0.0) { }

	Distance(float meters)
	{
		float fltfeet = MTF*meters ; 
		feet = int(fltfeet)  ; 
		inches = 12 * (fltfeet-feet) ; 
		cout<<"\nOne arg \n" ; 
		cout<<"\nBasic to class type conversion" <<endl ; 
	}

	Distance(int ft , float in) : feet(ft) , inches(in) {cout<<"\ntwo array ! \n" ; }
	void getdist(){
		cout<<"\nEnter feet and inches : " ; cin>>feet >>inches ; 
	}

	void showdist() const{
		cout<<feet <<":" <<inches <<endl ; 
	}

	void operator=(float meters) ; 
}; 


int main()
{

}
