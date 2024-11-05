#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "monitor.h"




int scan (char *wirlessCard){
    
    // Declare a buffer to hold the command string.
    char commande[100];

    // Format the command string to execute the airodump-ng tool with the provided wireless card.
    snprintf(commande, sizeof(commande), "sudo airodump-ng %s", wirlessCard);
    
    // Execute the command.
    system(commande);

    

   return 0;
}   