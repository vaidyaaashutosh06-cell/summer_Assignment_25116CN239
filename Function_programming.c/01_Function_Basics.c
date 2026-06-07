#include <stdio.h>
void display(); 
//Function prototype
int main()
{
    int a;
    printf("Initializing display function\n");
    display();
    printf("Display function finished its work\n");
    return 0;
}// Function call

void display()
{
    printf("This is display\n");
}
//Fuction defination