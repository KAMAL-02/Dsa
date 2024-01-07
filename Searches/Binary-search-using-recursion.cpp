int Binarysearch(int arr[] , int l  , int h , int key){
  while(l<=h){
mid = (l+h)/2 ;
if(key == arr[mid]){
return mid ;
}
else if (arr[mid] > key) {
            return binarySearch(arr, l, mid - 1 , key);
        }
        // If the target is larger, search in the right half
        else {
            return binarySearch(arr, mid + 1, h , key);
        }
  }
}
