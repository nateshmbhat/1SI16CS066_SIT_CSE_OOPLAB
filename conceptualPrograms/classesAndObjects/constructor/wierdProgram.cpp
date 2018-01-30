#include<bits/stdc++.h>


using namespace std ; 

class myClass{

	private : 

	public:
	static int count;
	int a , b ;
	myClass(void)
	{
		cout<<" constructor called : " <<endl; 
		a = 0 ; 
		b = 0 ; 
		count++;
	}

	void fnDo(myClass obj)
	{
		cout<<"obj.a = " <<obj.a ; 
		cout<<"obj.b = " <<obj.b ; 
	}
};

int myClass::count;

int main(void)
{
	myClass obj , obj1 ; 
	obj.a = 10 ; 
	obj.b = 20 ; 	
	
	obj1.fnDo(obj) ; 

	cout << myClass::count << endl;
}
