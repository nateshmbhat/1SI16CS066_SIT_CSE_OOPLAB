#include<bits/stdc++.h>
using namespace std ; 

void fnRotate(int &a , int &b)
{
	int t = a ; a =  b , b = t ;
}

void fnRotate(int &a , int &b , int &c)
{ int t = a ; a = b , b = c , c = t ; }

void fnRotate(int & a, int &b , int &c , int &d)
{ int t = a ; 
a = b, b = c , c = d , d = t ; } 

void fnRotate(double & a , double &b , double &c)
{	double t= a ; a = b , b = c , c = t ; } 


	void print(int ia , int ib , int ic){
	cout<<"a = " <<ia << " b = " << ib << " c = " <<ic <<endl; 
	}
	
int main()
{
	
	int ia = 1 , ib = 2 , ic = 3 , id = 4 ; 
	double dx = 1.1 , dy = 2.2 , dz = 3.3 ;
	cout<<"a = " <<ia << " b = " << ib << " c = " <<ic <<endl; 
	//fnRotate(ia  ,ib) ; 
	//print(ia , ib , ic ) ; 	
	fnRotate(ia , ib , ic) ; 
	print(ia , ib , ic) ; 
	fnRotate(ia , ib , ic ) ; 
	print(ia , ib , ic) ; 
	fnRotate(dx , dy , dz) ; 
}
