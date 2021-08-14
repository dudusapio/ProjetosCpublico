#include <stdio.h>


int main (void){
    int x = 4,y = 7,z= 30;

    while( (2 * x) < z){
        if((y + z) % 5 > 2){
            y = y - (z % 5);
            x = x + 2;
            z = z - y;
        }
        else {
            y = y - x;
            x = x - 1;
            z = z + y;
        }
        printf("parciais y = %d \n x = %d \n z = %d \n",y,x,z);
    }
}
