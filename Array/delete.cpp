void delete_arr(int arr[] , int index , int length){
    int x = arr[index] ;
    for (int i = index; i < length; i++)
    {
        arr[i] = arr[i+1] ;
    }
    length-- ;
}
