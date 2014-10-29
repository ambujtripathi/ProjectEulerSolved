/*-------------------------------------------------------------------------
Problem 1:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we
get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the
multiples of 3 or 5 below 1000.

Answer: 233168
--------------------------------------------------------------------------*/
#include <stdio.h>

int getSum(int limit){
    int resSum = 0, iCount;
    for (iCount = 3; iCount < limit; iCount++){
        if(iCount % 3 == 0)
            resSum += iCount;
        else if(iCount % 5 == 0)
            resSum += iCount;
        else
            continue;
    }
    return resSum;
}

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("\nThe required sum is: %d\n", getSum(limit));
    return 0;
}
