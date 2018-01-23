#include<bits/stdc++.h>
using namespace std ; 

class Complex
{
	int iReal , iImg ; 

	public :
	void fnSetVal(int iA , int iB)
	{
		iReal = iA  , iImg = iB ; 
	}
	void fnPrintVal()
	{
		cout<<"Z = " << iReal << " + i" <<iImg <<endl  <<endl  <<endl ; 
	}

	Complex  fnAddComplex(const Complex C)
	{
		Complex sum ; 
		sum.iReal = C.iReal + iReal ; 
		sum.iImg = C.iImg + iImg ; 
		return sum ;
	}

};


int main(void)
{
	Complex C  , C1 ; 
	C.fnSetVal(1 , 2 ) ; 
	C1.fnSetVal(3 , 4 ) ; 
	C.fnPrintVal() ; 
	Complex sum = C.fnAddComplex(C1) ;
	sum.fnPrintVal()  ;
}
