#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("name?: ");
    int l = strlen(name);
    printf("%i \n", l);
}