
int strlen_recursive(char *str)
{ 
  // end recursion if null character is reached
  if(*str == '\0')
  {
    return 0;
  }
  else
  {
    // recursively call strlen_recursive with next position in string
    return 1 + strlen_recursive(str + 1);
  }
}

void strcpy_recursive(char *dest, char *src)
{
  // end recursion if null character is reached
  if(*src == '\0')
  {
    *dest = '\0';
  }
  else
  {
    // copy current character
    *dest = *src;

    // recursively call strcpy_recursive with next position is string
    strcpy_recursive(dest + 1, src + 1);
  }
}