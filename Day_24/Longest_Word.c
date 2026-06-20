#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], longest[100], word[100];
    int i, j = 0, maxlen = 0;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    for (i = 0;; i++)
    {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
        {
            word[j] = '\0';
            if (j > maxlen)
            {
                maxlen = j;
                strcpy(longest, word);
            }
            j = 0;
            if (str[i] == '\0' || str[i] == '\n')
            {
                break;
            }
        }
        else
        {
            word[j++] = str[i];
        }
    }
    printf("Longest word:%s\n", longest);
    printf("Longest:%d\n", maxlen);
    return 0;
}
