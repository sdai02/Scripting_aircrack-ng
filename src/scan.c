#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "monitor.h"

int scan (char *wirlessCarte){
    char commande[100];
    
    snprintf(commande, sizeof(commande), "sudo airodump-ng %s", wirlessCarte);
    
    system(commande);

   return 0;
}   