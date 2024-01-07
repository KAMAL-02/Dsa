//you cant directly increase the size of array but you can copy the elements of array and paste it to some other array of large size
void increase_size(){
    int *p = new int[5]{1,2,3,4,5} ;
    int *q = new int[10] ;
    for(int i = 0 ; i < 5 ;i++ ){
        q[i] = p[i] ;
    }
    delete []p ;
    p = q ;
    q = NULL ;
}
