#include <stdbool.h>

bool isPalindrome(int x)
{
    if (x < 0 || x%10 == 0 && x != 0) return false;
    int i, d;
    d = x;
    unsigned int j = 0;
    while (d > 0 && d != 0)
    {
        i = d % 10;
        j = j*10 + i;
        d = d/10;
    }

    if (j == x) return true;
    return false;
}



// USING STRING
// size_t strLen(const char *str)
// {
//     size_t length = 0;
//     while (str[length] != '\0')
//     {
//         length++;
//     }
//     return length;
// }

// bool isPalindrome(int x)
// {
//     if (x < 0 || x%10 == 0 && x != 0) return false;

//     char str[11];
//     snprintf(str, sizeof(str), "%d", x);
//     int length = strLen(str);
//     int i = 0;
//     while (i < length / 2)
//     {
//         if (str[length - 1 - i] != str[i])
//         {
//             return false;
//         }
//         i++;
//     }
//     return true;
// }
