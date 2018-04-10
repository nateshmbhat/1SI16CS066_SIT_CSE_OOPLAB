#include<iostream>
using namespace std ; 

template<class type>
class stack
{
	type items[100] ; 
	int top ; 

	public : 
	stack() :top(-1){}

	void display()
	{for(int i =0 ; i<=top ; i++) cout<<" " << items[i] ; cout<<endl<<endl; }

	void push(type obj) { items[++top] = obj ;  }

	type pop(void){return items[top--] ; }
};


int main(void)
{
	stack<int> ia ; 
	stack<float> fa ; 
	stack<string> sa ; 
	// char buff[10] , buffer2[10] ; 
	// cin.get(buff , 4) ; 
	// cout<<"buffer 1 = " <<buff << "=="<<endl; 

	// cin.get(buffer2, 5 ) ; 
	// cout<<"buffer2 " <<buffer2<<endl;

	for(int i =0 ; i<10 ; i++)
		{ia.push(i) ; sa.push(char(i)+"Hi") ;  }
	ia.display( ) ; 
	for(float i =10.0 ; i<15.23; i+=0.43) 
	{fa.push(i) ; }
	fa.display() ; 
	sa.display() ;
}

