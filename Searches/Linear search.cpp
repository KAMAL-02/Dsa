#include<iostream>
using namespace std ;

int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int key = 5 ;
    for (int i = 0; i < 10; i++)
    {
        if(key == A[i])
        cout << i ;
    }
    return 0 ;
}
