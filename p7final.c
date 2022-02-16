#include<stdio.h>

void display_string(char *s)
{
    for(int i=0;s[i] != '\0';i++)
    {
        printf("%c ",s[i]);
    }
    printf("\n");
}


int main()
{
  char s[100]="pooja";
  display_string(s);
}