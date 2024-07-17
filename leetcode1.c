/*You are given two positive integers n and k. There are n children numbered from 0 to n - 1 standing in a queue in order from left to right.

Initially, child 0 holds a ball and the direction of passing the ball is towards the right direction. After each second, the child holding the ball passes it to the child next to them. Once the ball reaches either end of the line, i.e. child 0 or child n - 1, the direction of passing is reversed.

Return the number of the child who receives the ball after k seconds.*/
#include<stdio.h>

int numberOfChild(int n, int k);

int main()
{
   int c, t;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&c ,&t);

   int z = numberOfChild(c, t);
    
    printf("%d", z);
   
}
int numberOfChild(int n, int k) {

    int rounds, remainder;
    n = n-1;

    rounds = k/n; //number of rounds the ball has been passed

    remainder = k % n; // remainder is the child number with the ball after k seconds

    if(rounds % 2 == 0)
    {
        return remainder; //if number of round is even, the remainder is the child with ball
    }
    else
    {
        return n - remainder; //if number of round is odd, remainder - n is the child with ball
    }
    
}