#include<bits/stdc++.h>
using namespace std ; 

class myclass{

	public : 
	int a , b ; 

	myclass(myclass &) ; 
	myclass() ; 

	void addNum(myclass obj ) ; 
}; 

myclass::myclass(myclass & obj)
{
	cout<<"\nExecuting empty copy constructor " ; 
}

void myclass::addNum(myclass obj)
{
	cout<<"\nAfter creating the local copy obj , it calls the copy constructor instea of Normal constructor .\n" ; 
	myclass temp   ; 
	
	cout<<"\nSum is : " << obj.a + obj.b ;  
}

myclass::myclass()
{
	cout<<"\nExecuting Normal constructor " ; 
}



int main()
{

	myclass obj ; //Normal constructor 
	obj.a = obj.b = 10 ; 

	myclass obj1 = obj ;  //Executes copy constructor
	obj.addNum(obj1) ; 

}