#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float euro;                                     //Prompt user code 'do this'.. Euro will be our float to detail its a decimal number.
    do
    {
        euro = get_float("Change: ");               //Get our euro 'float' by asking for change amount.
    }
    while (euro <= 0);                              //Start loop. 'while this value is true', less than or equal to 0. Always start at 0.

    int cents = round(euro * 100);                  //2 Ints. cents and coins. Use round to assign decimal value rounded to closest. Cents are decimal of euro so *100.
    int coins = 0;                                  //Coin variable value which we start at 0.

    while (cents >= 25)                             //Loop.. 'while the following is true..' >= while cents are greater than or equal to x...
    {
        cents -= 25; coins++;                       //..cents - or = 25, use this coin 'coin++'. as if to say -= 25 is one coin of that value.
    }
    while (cents >= 10)                             //and so on and so on..
    {
        cents -= 10; coins++;
    }
    while (cents >= 5)
    {
        cents -= 5; coins++;
    }
    while (cents >= 1)
    {
        cents -= 1; coins++;
    }
    printf("You will need: %i coins\n", coins);     //Print reply with integer calculated.
}
