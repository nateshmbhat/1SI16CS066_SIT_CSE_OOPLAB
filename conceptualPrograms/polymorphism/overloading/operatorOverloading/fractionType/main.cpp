#include<bits/stdc++.h>

using namespace std ; 

class FractionType
{
	int num , den ; 

	friend ostream& operator<<(ostream& , FractionType&) ; 
	friend istream& operator>>(istream& , FractionType&) ; 

	public : 
	FractionType operator+(const FractionType&) const ; 
	FractionType operator-(const FractionType&) const ; 
	FractionType operator=(const FractionType&) ; 
	FractionType operator*(const FractionType&) const ; 
	FractionType operator/(const FractionType&) const ; 
	bool operator==(const FractionType&) ; 

} ; 


FractionType FractionType::operator/(const FractionType& F) const
{
	FractionType res ; 
	res.num = num * F.den ; 
	res.den = den * F.num ;
	return res ; 
}

FractionType FractionType::operator+(const FractionType& F) const
{
	FractionType sum ; 
	sum.num =  num * F.den + den * F.num ; 
	sum.den = den * F.den ; 
	return sum ;
}


FractionType FractionType::operator-(const FractionType& F) const
{
	FractionType sum ; 
	sum.num =  num * F.den - den * F.num ; 
	sum.den = den * F.den ; 
	return sum ;	
}


FractionType FractionType::operator*(const FractionType& F) const 
{
	FractionType res ; 
	res.num = num * F.num ; 
	res.den = den * F.den ; 
	return res ; 
}


FractionType FractionType::operator=(const FractionType& F)
{
	num = F.num  , den = F.den ; 
	return *this ; 
}

ostream& operator<<(ostream& out , FractionType& F)
{
	cout<< "\n" <<F.num <<" / " <<F.den ; 
	return out ; 
}


istream& operator>>(istream& in , FractionType& F)
{
	cout<<endl<<"Enter the numerator and denominator : " ; 
	in>> F.num >> F.den ;
	cout<<endl; 
	return in  ; 
}


int main(void)
{
	FractionType f1 , f2 ; 
	cin>>f1 >>f2 ; 
	cout<<f1<<f2 ;
	FractionType f3 ; 
	f3 = f1+ f2 ; 
	cout<<"\nSum : " <<(f3) ; 
	f3 = f1 - f2 ;
	cout<<"\nDiff : " <<f3 ; 
	f3 = f1* f2 ; 
	cout<<"\nMul : " <<f3 ; 
	f3 = f1/f2 ; 
	cout<<"\nDiv : "  <<f3 ; 
	cout<<endl<<endl; 
	return 0 ; 
}
