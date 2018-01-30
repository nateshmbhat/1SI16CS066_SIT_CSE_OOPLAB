#include<bits/stdc++.h>
using namespace std ; 

void fetchModify(const int *) ; 

int main(void)
{
	int iArr[10] = { 1,2,3,4,5,6,7,8,9,10} ; 
	fetchModify(iArr) ; 
	iArr[7] = 17 ; 
	return 0 ; 
}


void fetchModify(const int * xPtr )
{
	int i ; 
	for(i =0 ; i< 10 ; i++)
		cout<<xPtr[i] ; 
	//xPtr[7] = 2 ; Not allowed 
	
	cout<<endl; 

	for(i = 0 ; i< 10 ; i++)
		cout<< xPtr[i] ; 
	
	cout<<endl; 

}

	
