#include<bits/stdc++.h>
using namespace std ; 

class Box
{
	protected:
	double len , wid , hei ; 	

	public:
	Box(double le , double wv , double h=1):len(le) , wid(wv) , hei(h){} 
	Box():len(1) , wid(1) , hei(1){} 

	double volume() const
	{
		return len*wid * hei ; 
	}

	double getlen() {return len ; }
	double gethei(){return hei ; }
	double getwid() {return wid ; }
	friend ostream& operator<<(ostream& stream , const Box &box) ; 
} ;


class Carton:public Box
{
	private : 
	string material ; 

	public : 

	Carton(const string desc="cardboard") :Box(2 , 3) ,  material(desc){}
	void showDetails()
	{
		cout<<"\nMaterial = " <<material ; 
		cout<<"\nLength = " <<getlen() ; 
		cout<<"\nWidth = " <<getwid() ; 
		cout<<"\nHeight = " <<gethei() ; 
		cout<<endl ;
	}
};


int main()
{
	Box box(40.0 , 30.0 , 20.0) ; 
	Carton carton ; 
	Carton candy("Some material ! ") ;

	cout<<"box occupies " <<sizeof box <<" bytes" <<endl ;
	cout<<"\nCarton occupies" <<sizeof carton <<"bytes"<<endl; 
	cout<<"Candy Carton occupies " <<sizeof candy <<" bytes" <<endl; 

	cout<<"\nbox volume is " <<box.volume()<<endl; 
	cout<<"\nCarton volume is " <<carton.volume() <<endl ; 
	cout<<"\nLength is " <<candy.getlen() ; 

	carton.showDetails() ; 
	candy.showDetails() ; 
}