void insert(int arr[] ,int key , int index , int length){
    int i ;
    for ( i = length; i > index; i--)
    {
        arr[i] = arr[i-1] ;
    }
    arr[i] = key ;
}
//size of array must be greater than length of an array
