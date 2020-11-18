#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num,lim = 1000, factor = 1000, guess_num;
int verify(int guess);
int guess(int i);

int main(int argc, char **argv){
    if(argc < 2){
        printf("invalid args");
        exit(-1);
    }

    sscanf(argv[1],"%d", &num);

    int i = 50;
    guess_num = 1000;
    while (--i){
        int j = verify(guess_num);
        if (j == 0){
            printf("success\n");
            exit(0);
        }
        guess_num = guess(j);
        printf("%d\n", guess_num);
    }
}

int verify(int guess){
    if (guess == num)return 0;
    if (guess > num){
        return 1;
    }else{
        return -1;
    }    
}

int guess(int i){
    factor = factor / 2;
    if (factor == 0){
        factor = 1;
    }

    int x;
    if (i == (-1)){
        x = lim + factor;
    }else if(i == 1){
        x = lim - factor;
    }
    lim = x;
  return x; 
}