#include<iostream>
using namespace std ;

int binary(int A[] , int key , int size){
    int l = 0 ;
    int h = size-1 ;
    while (l<=h)
    {
        int mid = (l+h)/2 ;
        if(key == A[mid]){
            return mid ;
        }
        else if(key < A[mid]){
            h = mid - 1;
        }
        else{
            l = mid+1 ;
        }
    }
    return -1 ;
    
}

int main(){
    int A[10] = {1,5,3,2,7,8,9,4,6,10};
    cout << binary(A , 5, 10);
    return 0 ;

}
