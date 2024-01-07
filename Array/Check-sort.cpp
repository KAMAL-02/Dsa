bool sort(int arr[] , int length){
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > arr[i+1])
        {
           return false ;
        }
        
    }
    return true ;
    
}
