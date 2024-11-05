// to start the script : main.c src/handshake.c src/scan.c src/deathauth.c  src/monitor.c src/crack.c -o main && ./main 



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

    // Check if any command line arguments have been passed

    if(argv > 1){

        // Check the first argument to determine which function to execute

        if (strcmp(argc[1], "-ms") == 0){

            // Execute monitor mode and start scanning Wi-Fi networks
            monitor(argc[2]);
            scan(argc[2]);

        } else if (strcmp(argc[1], "-m") == 0){
            
            // Execute monitor mode with the specified interface
            monitor(argc[2]);

        } else if (strcmp(argc[1], "-s") == 0){

            // Execute the scan of Wi-Fi networks
            scan(argc[2]);

        } else if (strcmp(argc[1], "-h" ) == 0){

            // Capture the handshake on the specified channel and MAC address
            handshake(argc[2], argc[3], argc[4]);

        } else if (strcmp(argc[1], "-d") == 0){
            
            // Perform a deauthentication attack on the specified client
            deathauth(argc[2], argc[3], argc[4], argc[5]);

        } else if (strcmp(argc[1], "-c") == 0){

            // Attempt to crack the WPA/WPA2 key with the specified file
            crack(argc[2], argc[3]);

        } else if (strcmp(argc[1], "--help")){
            // Display help and the list of available commands
            printf("Commandes liste :\n"
            "-ms [your wirless card] : put your wireless card in monitor mode and scan the Wi-Fi \n"
            "-h [channel numbers] [mac adresse] [your wirless card] : capture the handshake \n"
            "-m [your wirless card] : switch your internal Wi-Fi card to monitor mode \n"
            "-s [your wirless card] : scan for available Wi-Fi networks \n"
            "-h [channel] [mac adresse] [your wirless card] : capture the handshake \n"
            "-d [number to deauths] [acessPoint] [client] [wirlessCarte] : perform a deauth attack on the client \n"
            "-c [your dictionary] [mac adresse] : crack the Wi-Fi password with the IV and dictionary \n"
            );

        } else {
        
            // Print an error message if the command does not exist
            printf("Your command does not exist.\n");

        }

    }else{

        // Print a usage message if no arguments are provided
        printf("Use '--help' for help.\n");

    }

    return 0;
    
}