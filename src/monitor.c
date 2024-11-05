#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "monitor.h"

int monitor(char *wirlessCarte){
    
    char commande[100];
    snprintf(commande, sizeof(commande), "sudo airmon-ng start %s", wirlessCarte);

    system(commande);

    return 0;
}