#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int min = get_int("Enter minute spend in shower: ");
    int bootle = 16; // 1 Bootle = 16 ounces
    int water = 192; // water/min in shower
    int result = 0;

    result = (min * water) / bootle;
    printf("You have wasted %d bootles of water while showering!\n", result);
    
}