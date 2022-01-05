 /*
 CH-230-A
 a5_p11.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h>
// i = divisor
// n = number being checked for being prime
int isprime(int i, int n){
    //base case one: 1 is not prime
    if (n == 1){
        return 0;
    }
    //base case two: 2 is prime 
    if (n == 2){
        return 1;
    }
    //if i is a divisor then n not prime 
    if (n % i == 0){
        return 0;
    }
    /* if root of n is reached while trying 
    to find a divisor but no divisor found, so 
    no previous return, then we have a prime number */
    if (i * i > n){
        return 1;
    }
    //recursive step, trying next value as divisor
    return isprime(i + 1, n);
}

int main(){
    int x;
    scanf("%d", &x);
    if(isprime(2, x) == 1){
        printf("%d is prime\n", x);
    }
    if(isprime(2, x) == 0){
        printf("%d is not prime\n", x);
    }
    return 0;
}