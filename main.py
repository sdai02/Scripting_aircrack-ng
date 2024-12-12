#!/usr/bin/python3

from src.handler_commands import subprocess, monitor, scan, handshake, deathauth, crack
import sys 

def main():
    if len(sys.argv) > 1:
        try: 
            argument = sys.argv[1]

            match argument:

                case "-ms" | "--monitoring_scaning":
                    monitor(sys.argv[2])
                    scan(sys.argv[2])

                case "-m" |"--monitoring":
                    monitor(sys.argv[2])

                case "-s" | "--scan":
                    scan(sys.argv[2])

                case "-ha" | "--handshake":
                    handshake(sys.argv[2], sys.argv[3], sys.argv[4])
                
                case "-d" | "--deathauth":
                    deathauth(sys.argv[2], sys.argv[3], sys.argv[4], sys.argv[5])

                case "-c" | "--cracking":
                    crack(sys.argv[2], sys.argv[3])

                case "-h" | "--help":
                    with open("src/help.txt", "r") as txt:
                        print(txt.read())

        
        except subprocess.CalledProcessError as e:
            print(f"Error while executing a command: {e}")
        except IndexError:
            print("Missing arguments. For help, use -h or --help.")

    else:
        print("For help, use -h or --help.")

main()