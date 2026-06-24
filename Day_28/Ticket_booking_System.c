#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    char seats;
};
int main()
{
    struct Ticket t[100];
    int n, i;
    printf("Enter number of bookings:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter Ticket number:");
        scanf("%d", &t[i].ticketNo);
        printf("Enter customer Name:");
        scanf("%s", &t[i].name);
        printf("Enter Number of seats:");
        scanf("%d", &t[i].seats);
    }
    printf("\n----- Ticket booking Details -----\n");
    for (i = 0; i < n; i++)
    {
        printf("\n Ticket number:%d", t[i].ticketNo);
        printf("\n customer name:%s", t[i].name);
        printf("\n Seats booked: %d\n", t[i].seats);
    }
    return 0;
}
