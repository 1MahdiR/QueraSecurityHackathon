## login

<p align="center">
<img src="challange.png"/>
</p>

first of all we need to install the app, thats when we see this screen:

<p align="center">
<img src="login.png"/>
</p>

checking the application activities in jadx:

<p align="center">
<img src="jadx.png"/>
</p>

we findout the "EmptyActivity" is what we want to access

So without interruption, we go to decompiling the application, in this case i use APK Easy Tool:

<p align="center">
<img src="APK Easy Tool.png"/>
</p>

Go straight to the application manifest file:

<p align="center">
<img src="Android Manifest.png"/>
</p>

and easily just change Lunch activity from "MainActivity" to "EmptyActivity" by moving intent-filter tag:

<p align="center">
<img src="After.png"/>
</p>

compile application and just open it you will see the string:

<p align="center">
<img src="Result.png"/>
</p>

decode string from Base64 and find the flag:

<p align="center">
<img src="decode.png"/>
</p>
