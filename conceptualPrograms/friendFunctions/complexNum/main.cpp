#include<bits/stdc++.h>

using namespace std ; 

class ComplexType
{
	private : 
		int iReal , iImg ; 

	public : 
	friend void addComplex(const ComplexType & , const ComplexType &) ;
	void getdata() ; 
		
} ; 

void ComplexType::getdata()
{
	cout<<"Enter real and img numbers : " ; 
	cin>>iReal >> iImg ; 
}

	void addComplex(const ComplexType &a , const ComplexType &b)
	{
		ComplexType sum ; 
		sum.iReal = a.iReal + b.iReal ;
		sum.iImg = a.iImg + b.iImg ; 
		cout<<"\nSum is " <<sum.iReal << " +i " << sum.iImg ; 
	}


main()
{
	
	ComplexType c1 , c2 ; 
	c1.getdata() ; 
	c2.getdata() ; 

	addComplex(c1 , c2) ; 

}
