## DH-talk

<p align="center">
<img src="challange.png"/>
</p>

When we open the pcap file with "wireshark" we can see some entries have messages:

<p align="center">
<img src="pcap.png"/>
</p>

<p align="center">
<img src="follow.png"/>
<p align="center">TCP stream of the pcap file clear text</p>
</p>
<br/>

DH stands for Diffie-Hellman encryption algorithm so we use [online Diffie-Hellman Key calculator](https://www.dcode.fr/echange-cle-diffie-hellman)
to find the key of cipher with the information we found in pcap file (P, G, a private key, b public key):

<p align="center">
<img src="site.png"/>
</p>

Now we just run the The command mentioned in the file (we replace "our_shared_key" with the key we found in previous step) and we can get the flag.

<p align="center">
<img src="command.png"/>
</p>
