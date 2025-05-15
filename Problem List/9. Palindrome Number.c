#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    char str[10] = {'\0'};
    snprintf(str, sizeof(str), "%d", x);
    printf("%s", str);
    int i = sizeof(str);
    while (i)
    {

    }
    
    return 0;
}

int main() {
    int num = 182736;

    // ⬇️ Aqui está a chamada da função
    if (isPalindrome(num)) {
        printf("%d é um palíndromo.\n", num);
    } else {
        printf("%d não é um palíndromo.\n", num);
    }

    return 0;
}
