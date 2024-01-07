//Ways of creating and initializing 2D-arrays
int A[3][4] ; //2D Array of 3 rows and 4 col is created
int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}//Elements are initialized

//2D Array is created in heap
int *A[3] ;//Array of pointer
A[0]=new int[4];
A[1]=new int[4];
A[2]=new int[4];

//2D Array in heap using double pointer
int **A ; 
A = new int[3];
A[0] = new int [4]
A[1] = new int [4]
A[2] = new int [4]

//To print the elements of 2D Array
for( int row = 0 ; row < 3 ; row++){
for( int col = 0 ; col<4;col++){
cout << A[row][col] ;
}
}
