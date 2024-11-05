# Scripting_aircrack-ng

## Important Notes

- **Ethical Use**: This script is intended for educational purposes and should only be used on networks for which you have permission to test.
- **Wordlists**: You can find various wordlists online (e.g., `rockyou.txt`), or create your own.

## Disclaimer

This software is intended for educational purposes only. The authors are not responsible for any misuse or damage caused by the use of this tool. Always obtain explicit permission before testing or attempting to crack any network. Unauthorized access to networks is illegal and unethical.

## Overview

This project provides a script to assist in cracking WPA/WPA2 encrypted Wi-Fi networks using the Aircrack-ng suite. The script automates the process of capturing the handshake and using a wordlist to attempt to recover the password.

## Prerequisites

- **Linux Operating System**: This script is designed to run on a Linux distribution (e.g., Ubuntu, Kali Linux).
- **Aircrack-ng**: Ensure that you have Aircrack-ng installed. You can install it using the following command:
  ```bash
  sudo apt-get install aircrack-ng
  ```
- **Wireless Network Adapter**: A wireless adapter that supports monitor mode and packet injection.
- **Wordlist**: A file containing potential passwords to test against the captured handshake.

## Usage

To compile and run the project, use the following command:

```bash
gcc main.c src/handshake.c src/scan.c src/deathauth.c src/monitor.c src/crack.c -o main && ./main
```

1. **Put Your Wireless Adapter into Monitor Mode**:
   Replace `wlan0` with your network interface name:
   ```bash
   ./main -ms wlan0
   ```
   If it does not work:
   ```bash
   ./main -m wlan0
   ./main -s wlan0mon
   ```


2. **Capture the Handshake**:
   After running the compilation command, you can start capturing packets:
   ```bash
   ./main -h [channel] [mac_address] [your_network_interface_name]
   ```

3. **Run Aircrack-ng**:
   After capturing the handshake, use Aircrack-ng to attempt to crack the password:
   ```bash
   ./main -c [path_to_wordlist] [target_bssid]
   ```


