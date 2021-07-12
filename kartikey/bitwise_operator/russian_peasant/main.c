
/* The Russian Peasant
 Given two integers, write a function to multiply them without using multiplication operator.
 There are many other ways to multiply two numbers (For example, see this). One interesting method is the Russian peasant algorithm. The idea is to double the first number and halve the second number repeatedly till the second number doesn’t become 1. In the process, whenever the second number become odd, we add the first number to result (result is initialized as 0)
 The following is simple algorithm.

 Let the two given numbers be 'a' and 'b'
 1) Initialize result 'res' as 0.
 2) Do following while 'b' is greater than 0
    a) If 'b' is odd, add 'a' to 'res'
    b) Double 'a' and halve 'b'
 3) Return 'res'.
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Russian peasant
int russianPeasant(int a, int b);
//kill Kth bit in an integer
int turnOffK(int n, int k);
int main()
{
    
    
    int first = 0, second=0, result=0;
//    printf("Give the first number:");
//    scanf("%d",&first);
//    printf("Give the second number:");
//    scanf("%d",&second);
//    result = russianPeasant(first,second);
//    printf("The result is %d\n", result);
    
    printf("The turn OFF Kth number\n");
    result = turnOffK(10,2);
    printf("result is %d\n", result);
}

int russianPeasant(int a, int b)
{
    int res = 0;
    while (b>0){
        if(b&1)
            res +=a;
        
        a = a<<1;
        b = b>>1;
    }
    return res;
}

int turnOffK(int n, int k)
{
    if(k<0)
        return n;
    return (~(1<<(k-1)) & n);
}
