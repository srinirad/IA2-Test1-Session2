/* What is a string?
   Array of characters terminated by '\0'.

   char a[100]='Sanvi";
   a[0] - 'S'
   a[1]- 'a'
   a[2] - 'n'
   a[3] - 'v'
   a[4] - 'i'
   a[5] - '\0'
*/

void get_string(char *s)
{
  printf("Enter a string\n");
  scanf("%s",s);
}

int string_length(char *s)
{
  for(int i=0;s[i]!= '\0';i++);
  return i;
}

char *string_copy(char *d, char *s)
{
  for(int i=0;s[i]!= '\0';i++);
    d[i]=s[i];
  return d;
}
char *string_rev(char *s)
{
  int length = string_lenght(s);
  length -= 1;
  char t;
  for(int i=0; i < lenght/2; i++)
  {
    t = s[i];
    s[i] = s[length - i]
    s[length - 1] = t;
  }
  return s;
}

void output(char *s, char *r)
{
  printf("The reverse of %s is %s\n",s,r);
}

int main()
{
  char s[100];
  get_string(s);
  char original[100];
  string_copy(original, s);
  string_rev(s);
  ouput(original,s);
  return 0;
}