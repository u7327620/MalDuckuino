# MalDuckuino
12th grade major project making my own usb with keyboard injections using Vusb,

just copy the server.js or git clone the repo. There's some other funky password getting command on the server I was gonna implement but proved useless anyway :weary:. 
After copying, you'll need to install node.js if you don't have it already, for linux you should just be able to do ye olde sudo apt-get install node otherwise go here: https://nodejs.org/en/download/ 
then just execute the server using node, for linux sudo node server.js
it'll begin running on your machine on port 443 and ip 0.0.0.0

If you want to use a public ip, you'll need to set-up port forwarding / virtual server on your router for your internal ip on port 443. Otherwise, I recommend just running it within the same network and coding your ducky to target the local address of your device "192.168.1.xxx". 

To change the rubber ducky code, just change the curl argument that has http:xxx-xxx-xxx-xxx/givepass to whatever your desired ip is. 
