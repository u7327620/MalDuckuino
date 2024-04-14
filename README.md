# MalDuckuino
12th grade school project for class in robotics. Creating a USB PCB with simple microprocessor and performing keystroke injection using Vusb for educational purposes.

This repo has a simple server that does nonpersistant data storage to enable transfer of data from target device. Depends on node.js

`sudo apt-get install node` otherwise available here: https://nodejs.org/en/download/ 
I execute the server with the command:  `sudo node server.js`
it defaults to port 443 and ip 0.0.0.0

To host the server publically, set-up port forwarding / virtual server targetting the server-hosting devices internal ip on port 443. I only tested the project within the same network using a local IP "192.168.1.xxx". 

To change the rubber ducky code, just change the curl argument that has http:xxx-xxx-xxx-xxx/givepass to whatever your desired ip is. 
