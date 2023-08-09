#include <stdio.h>
#include <string.h>

int convert(char input[]);

int main(int argc, char* argv[])
{
    printf("Type a number: ");
    char user_input[10];
    scanf("%s10", user_input);
    printf("%i\n", convert(user_input));
}

int convert(char input[])
{
    int num = 0;
    int len = strlen(input);

    printf("Input: %s\n", input);

    for (int i = len, multiply = 1; i > 0; i--, multiply*=10)
    {
        int c = input[i - 1] - '0';
        printf("c = %i\n", c);
        num = num + c * multiply;
    }
    return num;
    /*
    printf("num: %i\n", num);
    if (len == 0)
    {
        return num;
    }
    input[len - 1] = '\0'; // Errase last character 
    convert(input);
    */

    // PROBLEM: Input is getting errased at line 23 I think.
    // 2ème version, num is reset to 0
}
