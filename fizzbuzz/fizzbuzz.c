#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{
    // initiate a counter
    int counter = 0;
    for(int i = 1; i <= n; i++)
    {
        // check if divisible by 5 && 3
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz %d\n", i);
        // check if divisible by 5
        } else if (i % 5 == 0) {
            printf("Buzz %d\n", i);
        // check if divisible by 3
        } else if (i % 3 == 0) {
            printf("Fizz %d\n", i);
        } else {
            // increment counter
            counter++;
        }
    }
    // printf("%d\n", counter);
    return counter;
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif
