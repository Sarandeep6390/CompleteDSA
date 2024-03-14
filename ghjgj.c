#include <stdio.h>
int main() 
{
char *str = "Hello, world!";
char *ptr = str;
printf("%s\n", ptr + 7);
return 0;
}