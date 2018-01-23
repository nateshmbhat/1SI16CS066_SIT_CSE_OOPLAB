#include<bits/stdc++.h>

using namespace std ; 

void findVol(int a) { cout<<"vol = " << a*a*a <<endl; ; }
void findVol(double r) { cout<<"vol = "<<(4/3.0)*M_PI*r*r*r <<endl; }
void findVol(double r, int h ){cout<<" vol = " <<M_PI * r* r*h <<endl; }
void findVol(int a, int b , int c){cout<<" vol = "<<a*b*c ;}

int main(void)
{
	int a= 10 , b= 20 , c = 30 ;
	double r= 1.45 ;

	findVol(a) ; 
	findVol(r) ; 
	findVol(r , a) ; 
	findVol(a ,b ,c) ; 
}

