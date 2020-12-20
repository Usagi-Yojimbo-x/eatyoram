## This is a C programm that eat 99% of your ram.

To make memory usage extremely high( up to around 99% ), I gonna use malloc() function in C.
The idea is to allocate all the space on heap and assign them.

I'm using seed VM on VirtualBox with 1GB base memory.
First, let me check my memory usage using "free" command.
![free -om](https://github.com/Usagi-Yojimbo-x/eatyoram/blob/main/free%20-om(1).png)

Total memory is around 1GB and used memory is 114MB which is about 8.19% of total.
Before running the program, type "watch free -om" in one terminal to watch the process.
Run the program in another terminal.
![running the program](https://github.com/Usagi-Yojimbo-x/eatyoram/blob/main/Screenshot%20(74).png)

The programm allocates and uses about 1100MB which is 98.6% of total. We can round that to 99% :)

ref: https://www.linuxatemyram.com/
