## DH-talk

<p align="center">
<img src="challange.png"/>
</p>

open the pcap file with "wireshark" and you can see some entries has messages:

<p align="center">
<img src="pcap.png"/>
</p>

DH stands for Diffie-Hellman encryption algorithm so we use [online Diffie-Hellman Key calculator](https://www.dcode.fr/echange-cle-diffie-hellman)
to finde the key of cipher with information we found in pcap file (P, G, a private key, b public key):

<p align="center">
<img src="site.png"/>
</p>

run the The command mentioned in the file (replace the "our_shared_key" with the key we found in previous state) and see the flag

<p align="center">
<img src="command.png"/>
</p>
