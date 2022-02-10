#include <stdio.h>
int main()
{
    char msg1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char msg2[] = "Hi, how are you?";
    char *msg3 = "Hey!, what's up?";

    // array of strings
    char *myStrings[] = {"How's it going?", "How's your day?",
                         "How's life?"};

    printf("message 1: %s\n", msg1);
    printf("message 2: %s\n", msg2);
    printf("message 3: %s\n\n", msg3);

    for (int i = 0; i < 3; i++)
    {
        printf("msg %d is: %s \n", i, myStrings[i]);
    }

    return 0;
}