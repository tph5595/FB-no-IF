#include <stdio.h>
#include <stdlib.h>

#define MAX 15
#define MIN 1

// Define array of possibles outputs
union out {
        char * str;
        int * i;
} outputs[] = {{.i = 0}, {.str = "Fizz"}, {.str = "Buzz"}, {.str = "FizzBuzz"}};

int main(){
        int f, b;

        for(int *j = outputs[0].i = (int *)malloc(sizeof(int)); (*j) <= MAX; *j+=1 ) {
                // determine if should print fizz
                f = !((*j)%3);
                // determine if should print buzz
                b = !((*j)%5);
                //combine and print
                printf("%d\t%s\n", *j, outputs[((b<<1)+f)].str+"");
        }
}
