#include <stdio.h>
#include <math.h>

int is_even(int numb){
    int first,scnd,third,i=numb;

    first=i%10; i=i/10; ///154 ----> first=1, scnd = 5, third= 4
    scnd=i%10; i=i/10;
    third=i%10;

    if(pow(first,3)+pow(scnd,3)+pow(third,3)==numb){///is a^3+b^3+c^3==old big number
        return 1;
    }
    else return 0;
}

void numbs(){

    for ( int i=100; i<1000; i++){
        if(is_even(i)){
            printf("%d  ",i);
        }

    }

}

int main(){

    numbs();


    return 0;
}
