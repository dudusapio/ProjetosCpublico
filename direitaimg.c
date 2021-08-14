#include <stdio.h>

int main (void){

    int img_direita[600][400],img[600][400],i,j;    

    for(i = 0 ; i < 600; i ++){
        for( j = 0; j < 400 ; j ++){
            img_direita[i][j] = img[399-j][i];
            // [0][0] = [399][0]
        }
    }

}