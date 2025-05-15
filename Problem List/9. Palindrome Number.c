#include <stdio.h>
#include <stdbool.h>
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

bool isPalindrome(int x)
{
    if (x < 0 || x%10 == 0 && x != 0) return false;

    char str[11];
    snprintf(str, sizeof(str), "%d", x);
    int length = strLen(str);
    int i = 0;
    while (i < length / 2)
    {
        if (str[length - 1 - i] != str[i])
        {
            return false;
        }
        i++;
    }
    return true;
}
