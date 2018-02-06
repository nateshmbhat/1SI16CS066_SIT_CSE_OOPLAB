#include<bits/stdc++.h>

using namespace std ;

class Myclass
{
	private : 
		
	int sum(int a,int b){
		return a+ b; 
	}
	int diff(int a, int b){
		return a - b; 
	}


	public : 
		void printSumDiff(int a , int b)
		{
			cout<<"a + b = " <<sum(a , b) ; 
			cout<<"\na - b = " <<diff(a , b) ; 
		}
};

int main()
{
	Myclass obj ; 
	obj.printSumDiff(10 , 20 ) ; 
	cout<<endl ; 

}
