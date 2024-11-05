#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "handshake.h"



int handshake (char *channel, char *macAdresse, char *wirlessCarte){
    char commande[100];
    snprintf(commande, sizeof(commande), "sudo airodump-ng -c %s --bssid %s -w psk %s", channel, macAdresse, wirlessCarte);

    system(commande);
   


    return 0;
}