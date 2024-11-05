#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "monitor.h"

void scan (char *value){
    char commande[100];
    
    snprintf(commande, sizeof(commande), "sudo airodump-ng %s", value);
    
    
    int status = system(commande);
    if (status == -1) {
        printf("\n");
    } else {
        printf("\n");
    }
}   