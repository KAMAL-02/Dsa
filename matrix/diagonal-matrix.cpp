#include<iostream>
using namespace std ;

void Set(int Array[] , int i , int j , int x){
    if(i == j){
        Array[i-1]=x;
    }
}
int Get(int Array[] , int i , int j){
    if(i == j){
        return Array[i-1] ;
    }
    else{
        return 0 ;
    }
}

int main(){
    int arr[10];
    Set(arr,1,1,2);
    Set(arr,2,2,3);
    Set(arr,3,3,4);
    Set(arr,4,4,5);

    cout << Get(arr,2,2);

    return 0 ;

}
