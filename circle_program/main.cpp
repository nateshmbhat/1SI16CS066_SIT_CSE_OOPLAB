#include<iostream>
#include<iomanip>
#include<string>
#include<bits/stdc++.h>

typedef struct point{
int x , y ; 
}point ; 

typedef struct circle{
point c ;
float r ;
}circle ; 

using namespace std ; 

float dist(int x1 , int y1 , int x2 , int y2)
{
	return sqrt(pow(x2-x1 , 2) + pow(y2 -y1 , 2)) ; 
}

void read_circle(circle *  c1 , circle *  c2)
{
cout<<"Enter the center of 1st circle and its radius : " <<endl  ; 
//c1.c.x = 2 ;  c1.c.y = 4 ; c1.r = 1 ;  
//c2.c.x = 6 ; c2.c.y = 4 ; c2.r = 2 ; 
cin>>c1->c.x>>c1->c.y>>c1->r ;
cout<<"Enter the center of 2nd circle and its radius : "  <<endl ; 
cin>>c2->c.x >> c2->c.y >> c2->r ; 

}

int check_circle(circle c1 , circle c2)
{

//Return 2 for intersecting , 1 for just touching , 3 for seperate , 4 for concentric 	


if(dist(c1.c.x , c1.c.y , c2.c.x , c2.c.y) == 0)
	{
	cout<<"Concentric" <<endl ; 
	return 4 ;
	}

if(dist(c1.c.x , c1.c.y , c2.c.x , c2.c.y) == c1.r+c2.r)
{
	cout<<"Just touching " <<endl ; 
	return 1 ;
}

if(dist(c1.c.x , c1.c.y , c2.c.x , c2.c.y) < c1.r+c2.r)
{
	cout<<"Intersecting " <<endl; 
	return 2 ;
}

if(dist(c1.c.x , c1.c.y , c2.c.x , c2.c.y) > c1.r+c2.r)
{
	cout<<"Seperate" <<endl ; 
	return 3 ;
}

}


void display_circle(circle c1 , circle c2)
{
	cout<<"Circle 1 : center = ("<<c1.c.x<<" , "<< c1.c.y<<" ) "<<endl ; 

	cout<<"Circle 2 : center = ("<<c2.c.x<<" , "<< c2.c.y<<" ) "<<endl ; 
}



int main(void)
{

circle c1 , c2 ;
read_circle(& c1 ,& c2) ; 
display_circle(c1 , c2) ; 
check_circle(c1  ,c2) ; 

}
