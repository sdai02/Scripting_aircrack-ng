#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "assets/monitor.h"
#include "assets/scan.h"



int main (int argv, char *argc[]){


    if(argv > 1){
        if(strcmp(argc[1], "-ms")==0){
            monitor(argc[2]);
            scan(argc[2]);
        }
    }else{
        printf("Commandes liste :\n"
        "-ms  [your wirless card] : can put your wirless card on monitor mode and scan the wi-fi \n"
        "-h -c [channel numbers] --bssid [MAC Adresse] [your wirless card] : can capture the handshake\n"

        );

    }
    
}