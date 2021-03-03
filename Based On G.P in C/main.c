//
//  main.c
//  Based On G.P in C
//
//  Created by yogendra singh on 3/3/21.
//  Copyright © 2021 yadavboy. All rights reserved.
//

//Consider the following series:
//1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187...
//This series is a mixture of 2 series – all the odd terms in this series form a geometric series and all the even terms form yet another geometric series.
//Write a program to find the Nth term in the series.
#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int n , a , r , res ,term;
    printf("Enter a Number \n ");
    scanf("%d" , &n);
// for odd positions : term = (n+1)/2
    if (n%2==1) {
        a=1;
        r=2;
        term = (n+1)/2;
        res = pow(2,term-1);
        printf(" %d is a nth term of the series \n",res );
        }
    if (n%2==0) {
    a=1;
    r=3;
    term = n/2;
    res = pow(3,term-1);
    printf(" %d is a nth term of the series \n",res );
    }
    
    return 0;
}
