#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "monitor.h"


int monitor(char *wirlessCard){
    // Declare a buffer to hold the command string.
    char commande[100];

    // Constructs the command to enable monitor mode using the specified wireless card
    snprintf(commande, sizeof(commande), "sudo airmon-ng start %s", wirlessCard);

    // Executes the command to enable monitor mode
    system(commande);

    return 0;
}