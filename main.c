#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "src/monitor.h"
#include "src/scan.h"
#include "src/handshake.h"
#include "src/deathauth.h"
#include "src/crack.h"

int main (int argv, char *argc[]){


    if(argv > 1){

        if (strcmp(argc[1], "-ms") == 0){

            monitor(argc[2]);
            scan(argc[2]);

        } else if (strcmp(argc[1], "-m") == 0){

            monitor(argc[2]);

        } else if (strcmp(argc[1], "-s") == 0){

            scan(argc[2]);

        } else if (strcmp(argc[1], "-h" ) == 0){

            handshake(argc[2], argc[3], argc[4]);

        } else if (strcmp(argc[1], "-d") == 0){

            deathauth(argc[2], argc[3], argc[4], argc[5]);

        } else if (strcmp(argc[1], "-c") == 0){

            crack(argc[2], argc[3]);

        } else if (strcmp(argc[1], "--help")){
            
            printf("Commandes liste :\n"
            "-ms  [your wirless card] : your wirless card on monitor mode and scan the wi-fi \n"
            "-h [channel numbers] [MAC Adresse] [your wirless card] : capture the handshake \n"
            
            );

        } else {
            
            printf("your commande is not existe\n");

        }

    }else{
        
        printf("Use '--help' for help.\n");

    }
    
}