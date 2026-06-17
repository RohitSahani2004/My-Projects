/* C program to design a digital clock */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    int hour, minute, second;
    hour = minute = second = 0;

    while (1)
    {
        // Clear Output Screen
        system("cls");

        // Print time in HH : MM : SS format
        printf(" %02d : %02d : %02d", hour, minute, second);

        // Clear Output Buffer
        fflush(stdout);

        // Increase second
        second++;

        // Update hour, minute and second
        if (second == 60)
        {
            minute += 1;
            second = 0;
        }

        if (minute == 60)
        {
            hour += 1;
            minute = 0;
        }

        if (hour == 24)
        {
            hour = 0;
            minute = 0;
            second = 0;
        }

        // Wait for 1 second
        Sleep(1000);
    }

    return 0;
}