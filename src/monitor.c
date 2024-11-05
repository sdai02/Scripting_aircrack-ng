#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "monitor.h"

void monitor(char *value){
    
    char commande[100];
    snprintf(commande, sizeof(commande), "sudo airmon-ng start %s", value);

    int status = system(commande);
    if (status == -1) {
        printf("\n");
    } else {
        printf("\n");
    }
}