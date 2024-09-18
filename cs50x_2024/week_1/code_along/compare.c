#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_int("give x value: ");
    int y = get_int("give y value: ");

    if (x>y){
        printf("x is greater than y\n");
    }
    else if(x<y){
        printf("y is than x\n");
    }
    else{
        printf("x and y are equal\n");
    }
}

/*
 * first code after learning about using conditionals in C.
 * we can write the same program (with same functionality) in different ways but
   above code shows most efficient way to use conditionals (ifs, else ifs, elses). For above program logic,
   there can be 3 possibilities either x>y, x<y, or x=y (checked using "==" operator becoz "=" is an assignment operator).
   - if we use 3 "if"s its like asking 3 questions without considering other logical outcomes.
   - If we use "else if" in last condition instead of just "else", we are ignoring the previous logical outcomes
     (if x is neither >y nor <y) and again asking to check if "x==y" (x is equal to y), which is the obvious 3rd n only outcome.
   - simply put most efficient usage of conditionals is when we use as less as boolean expressions as possible.
     boolean expressions are like questions whose answers are either TRUE or FALSE (yes or no).
 */
