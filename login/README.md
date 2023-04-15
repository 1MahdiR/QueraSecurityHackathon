## login

<p align="center">
<img src="challange.png"/>
</p>

After we install the app, we see this screen:

<p align="center">
<img src="login.png"/>
</p>

Now we open the apk file in jadx to check the app activities:

<p align="center">
<img src="jadx.png"/>
</p>

There are 3 activities and the "EmptyActivity" is what we want to access.

So let's decompile the application with "APK Easy Tool":

<p align="center">
<img src="APK Easy Tool.png"/>
</p>

Now we go straight to the application manifest file:

<p align="center">
<img src="Android Manifest.png"/>
</p>

and easily just change Lunch activity from "MainActivity" to "EmptyActivity" by moving intent-filter tag:

<p align="center">
<img src="After.png"/>
</p>

Now we compile application and just open it. When we open the app we will see this string:

<p align="center">
<img src="Result.png"/>
</p>

Which looks like a base64.

Now we just decode string from base64 and get the flag:

<p align="center">
<img src="decode.png"/>
</p>
