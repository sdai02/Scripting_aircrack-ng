#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "crack.h"

int crack (char *dictionary, char *macAdresse){
    // Declare a buffer to hold the command string.
    char commande[100];

    // Constructs the command for aircrack-ng using the specified dictionary and BSSID.
    snprintf(commande, sizeof(commande), "aircrack-ng -w %s -b %s psk*.cap", dictionary, macAdresse );
    
    // Executes the command.
    system(commande);


    return 0;
}