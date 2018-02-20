#include<bits/stdc++.h>
using namespace std ; 

class Matrix
{

	int r , c ; 
	int **matrix ; 

	public : 

	Matrix(int row , int col)
	{
		r = row , c = col ; 
		matrix = new int *[row] ; 
		for(int i =0 ; i< r ; i++)
		{
			matrix[i]  = new int[col] ; 
		}
	}

	~Matrix()
	{
		delete [] matrix ;	
	}

	Matrix operator+(const Matrix&) const ; 
	Matrix operator-(const Matrix&) const ; 
	bool operator==(const Matrix&) ; //checks if both matrices are of same order 
	friend ostream& operator<<(ostream& , Matrix&) ; 
	friend istream& operator>>(istream& , Matrix&) ;
	Matrix operator=(const Matrix&) ; 
} ; 


Matrix Matrix::operator+(const Matrix& M)  const
{
	Matrix res(M.r , M.c) ; 	
	for(int i=0 ; i<M.r ; i++)
	{
		for(int j = 0 ; j <M.c ; j++)
		{
			res.matrix[i][j] = matrix[i][j] + M.matrix[i][j] ; 
		}
	}

	return res ; 
}

Matrix Matrix::operator=(const Matrix& M) 
{
	Matrix res(M.r , M.c) ; 	
	for(int i=0 ; i<M.r ; i++)
	{
		for(int j = 0 ; j <M.c ; j++)
		{
			res.matrix[i][j] = M.matrix[i][j] ; 
		}
	}

	return res ; 
}


Matrix Matrix::operator-(const Matrix& M)  const
{
	Matrix res(M.r , M.c) ; 	
	for(int i=0 ; i<M.r ; i++)
	{
		for(int j = 0 ; j <M.c ; j++)
		{
			res.matrix[i][j] = matrix[i][j] - M.matrix[i][j] ; 
		}
	}

	return res ; 
}



ostream& operator<<(ostream& out , Matrix& M ) 
{
	for(int i=0 ; i<M.r ; i++)
	{
		for(int j = 0 ; j <M.c ; j++)
		{
			cout<<M.matrix[i][j]<<" " ; 
		}

		cout<<endl; 
	}

	cout<<endl<<endl; 

	return  out; 

}


istream& operator>>(istream& in , Matrix& M )
{
	cout<<"\n\nEnter elements : " ; 
	for(int i=0 ; i<M.r ; i++)
	{
		for(int j = 0 ; j <M.c ; j++)
		{
			in>>M.matrix[i][j] ; 
		}

		cout<<endl; 
	}

	cout<<endl<<endl; 
	return in  ;
}

bool Matrix::operator==(const Matrix& M)
{
	return M.r ==r  && M.c == c ;  
}

int main(void)
{
	int m, n , p , q; 
	cout<<"Enter order of matrix 1 : " ; 
	cin>>m>>n ; 
	cout<<"\nEnter order of matrix 2 : "  ; 
	cin>>p>>q ; 
	Matrix A(p, q) , B(m,n) ; 

	if(A==B)
	{
		Matrix A(m, n ) , B(p , q) ; 
		cin>>A >>B ; 
		cout<<A <<B ;
		Matrix S(m,n) ;
		S = (A+B) ; 
		cout<<"\n\nMatrix Sum : " ; 
		cout<<S  ; 
		cout<<"\nMatrix difference is : \n" ; 
		S = A-B ; 
		cout<<S ;  
	}

	else{

		cout<<"\nMatrices cannot be added or subracted ! " ; 
	}

	A = B ; 
	cout<<A ; 
}


