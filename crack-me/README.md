## crack me

<p align="center">
<img src="challange.png"/>
</p>

So we just need to find the username and password.

When we install the app we see this login screen:

<p align="center">
<img src="login.png"/>
</p>

We open the apk file with jadx and find login activity and see these hashes:

<p align="center">
<img src="jadx.png"/>
</p>

Now we decode the username from base64:

<p align="center">
<img src="base46.png"/>
</p>

And use [CrackStation](https://crackstation.net/) to crack the password which is hashed with md5:

<p align="center">
<img src="md5.png"/>
</p>

Now we have the username and password, therefore we have the flag.

<p align="center">
<img src="loged in.png"/>
</p>
