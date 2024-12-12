#!/usr/bin/python3

# Importing necessary modules and functions from the src directory
from src.handler_commands import subprocess, monitor, scan, handshake, deathauth, crack
import sys 

def main():
    """
    Main function to parse command-line arguments and execute corresponding functions.
    """
    if len(sys.argv) > 1:  # Check if arguments are provided
        try: 
            argument = sys.argv[1]  # First argument to determine the main operation

            match argument:

                # Combined Monitoring and Scanning
                case "-ms" | "--monitoring_scaning":
                    monitor(sys.argv[2])  # Enable monitoring mode
                    scan(sys.argv[2])     # Perform scanning

                # Monitoring Mode Only
                case "-m" | "--monitoring":
                    monitor(sys.argv[2])

                # Scanning Mode Only
                case "-s" | "--scan":
                    scan(sys.argv[2])
                
                # Display Help Information
                case "-h" | "--help":
                    with open("src/help.txt", "r") as txt:
                        print(txt.read())

                # WPA Operations
                case "-wpa":
                    argument_2 = sys.argv[2]  # Subcommand for WPA operations

                    match argument_2:

                        # Capture Handshake
                        case "-ha" | "--handshake":
                            handshake(sys.argv[3], sys.argv[4], sys.argv[5])
                        
                        # Deauthentication Attack
                        case "-d" | "--deathauth":
                            deathauth(sys.argv[3], sys.argv[4], sys.argv[5], sys.argv[6])

                        # Crack WPA Key
                        case "-c" | "--cracking":
                            crack(sys.argv[3], sys.argv[4])

                # WEP Operations (Placeholder for further implementation)
                case "-wep":
                    argument_3 = sys.argv[2]

                # WPS Operations (Placeholder for further implementation)
                case "-wps":
                    argument_4 = sys.argv[2]

        # Handle subprocess errors
        except subprocess.CalledProcessError as e:
            print(f"Error while executing a command: {e}")

        # Handle missing arguments
        except IndexError:
            print("Missing arguments. For help, use -h or --help.")

    else:
        print("For help, use -h or --help.")

# Execute the main function
main()