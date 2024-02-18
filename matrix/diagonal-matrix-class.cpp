#include<iostream>
using namespace std ;

class Matrix{
    private :
    int n ; 
    int *A ;

    public :
    Matrix(){
        n = 2 ;
        A = new int[2];
    }
    Matrix(int n){
        this->n = n ;
        A = new int[n];
    }
    ~Matrix(){
        delete[]A ;
    }
    void Set(int i , int j , int x) ;
    int Get(int i , int j ) ;
};
void Matrix::Set(int i , int j , int x){
    if(i == j){
        A[i-1] = x ;
    }
}
int Matrix::Get(int i , int j){
    if(i == j){
        return A[i-1] ;
    }
    else{
        return 0 ;
    }
}
int main(){
    Matrix m(4) ;
    m.Set(1,1,2);
    m.Set(2,2,3);
    cout << m.Get(2,2) ;
    return 0 ;

}

