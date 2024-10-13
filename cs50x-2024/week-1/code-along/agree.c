# include <cs50.h>
# include <stdio.h>

int main(void){
    char c = get_char("Do you agree? press y/n: ");
    if (c=='y' || c=='Y'){
        printf("Agreed!\n");
    }
    else if (c=='n' || c=='N'){
        printf("Denied!\n");
    }
}

/*
 * read thougths.md for string vs char.
 * here we used boolean operator "OR" -> which in C is "||". Using "OR" helped us reduce redundancy
   (otherwise we wouldve needed to write conditions for each logical possibility).
 * In code -> Don't try to repeat yourself unnecessarily.
 */
