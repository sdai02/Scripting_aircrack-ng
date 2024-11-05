#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "handshake.h"



int handshake (char *channel, char *macAddress, char *wirlessCard){
    // Declare a buffer to hold the command string.
    char commande[100];

    // Constructs the command to start capturing the handshake on the specified access point.
    snprintf(commande, sizeof(commande), "sudo airodump-ng -c %s --bssid %s -w psk %s", channel, macAddress, wirlessCard);

    // Executes the command.
    system(commande);
   


    return 0;
}