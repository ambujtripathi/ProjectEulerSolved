/*-------------------------------------------------------------------------
Problem 2:
Each new term in the Fibonacci sequence is generated by adding the previous
two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed
four million, find the sum of the even-valued terms.

Answer: 4613732
--------------------------------------------------------------------------*/
#include <stdio.h>

int getEvenSum(){
    int resSum = 0, firstTerm = 1, secTerm = 2;
    do{
        printf("\nFirst Term = %d   Second Term = %d", firstTerm, secTerm);
        if(firstTerm % 2 == 0) resSum += firstTerm;
        secTerm += firstTerm;
        firstTerm = secTerm - firstTerm;
    }while(firstTerm < 4000000);
    return resSum;
}

int main() {
    printf("\nThe required sum is: %d\n", getEvenSum());
    return 0;
}
