#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{   int minutes;
    int seconds;
    printf("How many minutes?\n");
    scanf("%d",&minutes);
    printf("How many seconds?\n");
    scanf("%d",&seconds);
    int timeRemaining = (minutes * 60) + seconds;
    while (timeRemaining > -1){
        minutes = timeRemaining / 60;
        seconds = timeRemaining % 60;
        printf("%d:%d\r",minutes,seconds);
        sleep(1);
        timeRemaining -= 1;
    }
    printf("Times up!");
    return 0;
}
