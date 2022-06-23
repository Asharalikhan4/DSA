// Always remember that the size of the array can't be incresed. we can copy the element of small array to a large array.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, i;
    p = (int*)malloc(4*sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;

    // Now if we want to inc the size of this array and copy the element of this array to a large array.

    // Create a new pointer pointing to the bigger memory block
    int *q;
    q = (int*)malloc(10*sizeof(int));

    // Copying the element
    for(i = 0; i < 4; i++){
        q[i] = p[i];
    }

    free(p);
    p = q;
    q = NULL;

    for(i = 0; i < 4; i++){
        printf("%d\n",p[i]);
    }

    free(p);
    return 0;
}