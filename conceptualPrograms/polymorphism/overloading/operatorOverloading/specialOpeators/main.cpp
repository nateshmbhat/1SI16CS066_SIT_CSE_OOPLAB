#include<bits/stdc++.h>

using namespace std ; 


class safearray
{
	int size ; 
	int *arr ; 

public:

	safearray(int s)
	{
		size = s ; 
		arr = new int[size] ; 
	}

	int& operator[](int x)
	{
		return this->arr[x] ; 
	}

	safearray* operator->() 
	{
		return this ; 	
	}

	// vector<int> operator[](int x)
	// {
	// 	vector<int> store ; 

	// 	for(int i =x ; i<=y ; i++)
	// 	{
	// 		store.push_back(*this.arr[i]) ; 
	// 	}
	// 	return store ; 
	// }
} ; 


class Random
{
	int a , b ; 

	public : 

	Random(){}

	Random(int ia , int ib)
	{
		a  = ia , b = ib ; 
	}

	int operator()(int x)
	{
		return a + rand()%(x-a+1) ;
	}

	int operator()(int x , int y)
	{
		return x+ rand()%(y-x+1) ; 
	}


} ; 



int main(void)
{
	srand(time(NULL)) ; 
	safearray arr(10) ; 
	Random R(10 , 100) ; 

	for(int i = 0 ; i< 10 ; i++)
	{
		arr[i] = R(200) ;
	}

	for(int i =0 ; i<10 ; i++)
	{
		cout<<arr[i] <<" " ;  		
	}

	cout<<endl<<endl; 

	arr->arr[5] = 10 ; 
	cout<<arr[5]  ; 
}


