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
    //    */%c    char *s = %c%s%c;%c    printf(s,10,10,10,10,10,10,10,10,10,10,10,10,10,10,34,s,34,10,10);%c    called_function();%c    return (0);%c}%c";
    /*
        Comment in the Function 
    */ 
    char *s = "#include <stdio.h>%c/*%c    Comment Outside the Function%c*/%c%cint called_function()%c{%c    return (0);%c}%c%cint main ()%c{%c    /*%c       Comment in the Function %c    */%c    char *s=%c%s%c;%c    printf(s,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,34,s,34,10,10,10,10);%c    called_function();%c    return (0);%c}";
    printf(s,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,34,s,34,10,10,10,10);
    called_function();
    return (0);
}