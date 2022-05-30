Starting Nmap 7.80 ( https://nmap.org ) at 2022-05-30 07:04 IST
Nmap scan report for 192.168.0.106
Host is up (0.0036s latency).
Not shown: 999 closed ports
PORT     STATE SERVICE  VERSION
5555/tcp open  freeciv?
| fingerprint-strings:
|   adbConnect:
|     CNXN
|_    device::ro.product.name=r34az;ro.product.model=SMART_TV;ro.product.device=r34az;features=stat_v2,cmd,shell_v2
1 service unrecognized despite returning data. If you know the service/version, please submit the following fingerprint at https://nmap.org/cgi-bin/submit.cgi?new-service :
SF-Port5555-TCP:V=7.80%I=7%D=5/30%Time=62941F56%P=x86_64-pc-linux-gnu%r(ad
        SF:bConnect,85,"CNXN\x01\0\0\x01\0\x10\0\0m\0\0\0\*\(\0\0\xbc\xb1\xa7\xb1d
        SF:evice::ro\.product\.name=r34az;ro\.product\.model=SMART_TV;ro\.product\
        SF:.device=r34az;features=stat_v2,cmd,shell_v2");
MAC Address: 20:9B:E6:7E:38:7A (Unknown)
Device type: media device
Running: Google Android 5.X
OS CPE: cpe:/o:google:android:5.0
OS details: Sony Android TV (Android 5.0)
Network Distance: 1 hop

TRACEROUTE
HOP RTT     ADDRESS
1   3.62 ms 192.168.0.106

OS and Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
Nmap done: 1 IP address (1 host up) scanned in 108.82 seconds

