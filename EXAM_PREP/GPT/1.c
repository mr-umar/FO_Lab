#include <stdio.h>


void secToTime(int userSeconds, char *result) {

    int hours, minutes, seconds;

    seconds = userSeconds % 60;
    minutes = (userSeconds / 60) % 60;
    hours = userSeconds / 3600;

    sprintf(result, "%02dh %02dm %02ds", hours, minutes, seconds);
}


int main() {

    int userSeconds = 0;
    char result[9]; 

    printf("Introduzca la cantidad en segundos: ");
    scanf("%d", &userSeconds);

    secToTime(userSeconds, result);

    printf("Tiempo convertido: %s\n", result);

    return 0;
}