#include <stddef.h>

size_t strLen(const char *str)
{
  size_t length = 0;
  while (str[length] != '\0')
  {
    length++;
  }
  return length;
}
