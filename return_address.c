/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int * getAddressOfFunction() 
{
    static int x=10;
    return &x;
}

int main() 
{
    
    int * functionAddress = getAddressOfFunction();

    printf("Address of the function: %d\n", *functionAddress);

    return 0;
}

