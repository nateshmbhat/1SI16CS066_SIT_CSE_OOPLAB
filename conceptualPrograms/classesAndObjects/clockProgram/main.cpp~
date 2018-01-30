
#include<iostream>
#include<iomanip>

using namespace std ;

class ClockType
{
    int iH , iM , iS ; 
    
    public : 
    void fnSetTime(int H , int M , int S) ; 
    void fnGetTime(int & , int &  ,int & ) const ; 
    void fnIncHour() ;
	 void fnPrintTime() const ; void fnIncMin() ; 
    void fnIncSec() ; 
    bool fnCheckEqual(const ClockType&) const ; 
	 ClockType fnaddTime(const ClockType&) ; 
     
} ;

void ClockType::fnSetTime(int H , int M , int S )
{
	iH = H , iM = M , iS = S ; 
}

void ClockType::fnGetTime( int& h , int& m , int & s) const 
{
	h = iH , m = iM , s = iS ; 
}

void ClockType::fnPrintTime() const
{
	cout<<"Time = " ; 
	if(iH<10) cout<<"0" ; 
	cout<<iH<<" : " ; 
	if(iM<10)cout<<"0" ; 
	cout<<iM <<" : " ; 
	if(iS <10) cout<<"0" ; 
	cout<<iS <<endl ; 
}

ClockType ClockType::fnaddTime(const ClockType& C)
{
	ClockType sum ; 
	sum.iH = C.iH + iH ;
	sum.iM = C.iM + iM ;
	sum.iS = C.iS + iS ;

	if(sum.iS>59)
		{
			sum.iM += sum.iS/60 ;
			sum.iS = sum.iS%60 ; 
		}
	if(sum.iM>59)
	{
		sum.iH+= sum.iM/60 ;
		sum.iM = sum.iM%60 ; 
	}

	if(sum.iH>23)
		sum.iH = sum.iH%24 ; 
	return sum ; 
}

void ClockType::fnIncHour()
{
	iH = (iH+1)%24 ; 
}

void ClockType::fnIncMin()
{
	iM++ ; 
	if(iM>59)
		{
			fnIncHour() ; 
			iM = 0 ; 
		}
}

void ClockType::fnIncSec()
{
	iS++ ; 
	if(iS>59)
	{
		fnIncMin() ; 
		iS = 0 ; 
	}

}

bool ClockType::fnCheckEqual(const ClockType& C ) const 
{
	return iH==C.iH && iM==C.iM && iS==C.iS ; 
}

int main(void)
{
	
	int h , m , s ; 
	ClockType myclk, urclk ; 

	myclk.fnSetTime(23 , 59 , 59) ; 
	cout<<"my clock : " ; 
	myclk.fnPrintTime() ; 
	cout<<"Enter Hour Min Sec : " ; 
	cin>>h>>m >>s ; 
	urclk.fnSetTime(h , m , s) ; 
	cout<<"\nyour clock : "  ; 
	urclk.fnPrintTime() ; 
	if(myclk.fnCheckEqual(urclk))
		cout<<"Clocks are equal !" <<endl; 
	else
		cout<<"Clocks aren't equal !"<<endl;  

	cout<<"\n\nSum of two times = "  <<endl;
	ClockType sum = urclk.fnaddTime(myclk) ; 
	cout<<"Time 1 : "  ; myclk.fnPrintTime() ; 
	cout<<"Time 2 : "  ; urclk.fnPrintTime() ; 
	cout<<"Time 3 : "  ; sum.fnPrintTime() ; 

	
	myclk.fnGetTime( h , m , s) ; 
	cout<<"\n\nh = "<<h <<" m = "<<m <<" s = "<<s <<endl; 
	
	myclk = urclk ; 

	cout<<"After equating : " <<endl; 

	cout<<"myclk : " ; 
	myclk.fnPrintTime() ; 

	cout<<"urclk : " ; 
	urclk.fnPrintTime() ; 

}


