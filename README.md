# MalDuckuino
### This was a 12th grade school project for class in robotics. Creating a USB PCB with simple microprocessor and performing keystroke injection using Vusb for educational purposes.
It doesn't have any account-login bypasses and all data is insecurely transferred and stored. Made solely for educational purposes, not to be outside of controlled, safe networks.

### What was made
- USB PCB with ATTiny85 microprocessor, Based off: [Frank Zhao Business Card](https://320volt.com/en/attiny85-ile-usb-kartvizit/)
- Simple server with nonpersistant data storage for data transfer from target
- Script for retreiving saved connection profiles on user-logged-in win10 device (version used in 2022)
- Script for rickrolling on user-logged-in win10 device (it was 2022 :))

Server depends on node [available here](https://nodejs.org/en/download/) or through standard package manager: `pacman -S nodejs`, `apt-install nodejs` 
I executed the server with:  `sudo node server.js` with defaults for port 443 and ip 0.0.0.0

To host publicly, I used port/forwarding on my router to my internal ip on port 443. I only tested the project over a public ip once for demonstration purposes and stuck to local network due to how little I understood about code and network security. 

ensure the curl argument within the ducky code has operand http:<server-host-ip>/givepass.
