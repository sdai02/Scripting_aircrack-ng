#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "crack.h"

int crack (char *dictionary, char *macAdresse){

    char commande[100];

    snprintf(commande, sizeof(commande), "aircrack-ng -w %s -b %s psk*.cap", dictionary, macAdresse );
    system(commande);


    return 0;
}