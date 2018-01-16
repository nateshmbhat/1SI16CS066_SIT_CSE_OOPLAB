#include<iostream>
#include<iomanip>

using namespace std ; 

float find(float p=10000 , int t=5 , float r=14)
{
	float sum =p ; 
	for(int i =0 ; i<t ; i++)
		sum+=sum*(r/100.0) ; 	
	return sum ; 
}

int main(void)
{
	cout<<"Sum amount for p=10000 , t = 5  , r = 14  is " <<find()<<endl; 
	cout<<"Sum amount for p = 100 , t = 2 , r = 10  is " << find(100 , 2 , 10) ; 
	return 1 ; 
}

