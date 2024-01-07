void Reverse(int arr[] , int size){

    int i = 0 ;
    int j = size - 1 ;
    while(i<j){

        swap(arr[i],arr[j]) ;
        i++;
        j--;

    }
}
