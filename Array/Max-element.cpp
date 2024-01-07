int max(int arr[] , int size){
    int x = arr[0] ;
    for(int i = 0 ; i < size ; i++){
        if (arr[i]>x)
        {
            x = arr[i] ;
        }
    }
    return x ;
}
