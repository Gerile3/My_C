#include <stdio.h>
#include <cs50.h>


int main(void)
{
    string answer = get_string("name ?\n");
    printf("%s",answer);
    printf("Hello\n");

    int age = get_int("age ?\n");
    printf("%d",age);
    
}