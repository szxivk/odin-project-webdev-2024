/*
 * greedy algorithms: According to the National Institute of Standards and Technology (NIST),
 a greedy algorithm is one “that always takes the best immediate, or local, solution while finding an answer.
 Greedy algorithms find the overall, or globally, optimal solution for some optimization problems,
 but may find less-than-optimal solutions for some instances of other problems.”

 * largest-to-smallest approach
 * psuedocode is as follows:
 * Start
 * enter change
 * set coins to 0
 * if change = 0
 *  output coins
 * while change>0
 *  if change >= 25
 *      coin++
 *      change-=25
 *  else if change <25 && >= 10
 *       coin++
 *       change -=10
 *  else if change <10 && >= 5
 *       coin++
 *       change -=5
 *  coin++
 *  change -=1
 * output coins
 * end
*/

#include <cs50.h>
#include <stdio.h>

int main(void){

    int change;
    do{
        change = get_int("change amount: ");
    } while (change < 0);

    int coin = 0;
    while (change > 0){
        if (change >= 25 ){
            change -= 25;
            coin++;
        }
        else if ( change >= 10 && change < 25) {
            change -= 10;
            coin++;
        }
        else if ( change >= 5 && change < 10) {
            change -= 5;
            coin++;
        }
        else {
            change -= 1;
            coin++;
        }
    }
    printf("%i\n", coin);
}
