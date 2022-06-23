#include <stdio.h>

int main(){
    int A[5];
    for(int i = 0; i < 5; i++){
        // Remember we use the %u while printing the address.
        printf("%u\n",&A[i]);
    }
    return 0;
}


/*

- Output of the following code. by the code we can see that the int here taking 4 byte memory.

1834579028
1834579032
1834579036
1834579040
1834579044

*/