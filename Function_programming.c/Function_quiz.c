#include <stdio.h>
void goodmorning();
void goodafternoon(); // Funtion prototype
void goodnight();

int main()
{
    goodmorning();
    goodafternoon();
    goodnight(); // Functio call
    return 0;
}

void goodmorning()
{
    printf("Good morning Aashutosh\n");
}
void goodafternoon()
{
    printf("Good afternoon Aashutosh\n");//Funtion deffination
}
void goodnight()
{
    printf("Good night Aashutosh\n");
}
