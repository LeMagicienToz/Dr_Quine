#include <stdio.h>
/*
    Comment Outside the Function
*/

int called_function()
{
    return (0);
}

int main ()
{
    char *s = "#include <stdio.h>%c/*%c    Comment Outside the Function%c*/%c";
    /*
        Comment in the Function 
    */
    printf("%s", "")
    called_function();
    return (0);
}