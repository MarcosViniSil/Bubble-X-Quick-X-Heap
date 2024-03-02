#include <stdio.h>
//#include "quick-sort.c"
//#include "heap-sort.c"
#include "bubble-sort.c"
#include <stdlib.h>
#include <time.h> 


int main(){
    int arr[]={8,0,9,6,8,4,2,9,1,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\n n %d \n",n);
    clock_t t; 
    t = clock(); 
    bubble_sort(arr, n );
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\nfun() took %f seconds to execute \n", time_taken); 
     printf("\n");

    return 0;
}