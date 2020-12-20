## This is a C programm that eats 99% of your RAM

To make memory usage extremely high( up to around 99% ), I gonna use malloc() function in C.
The idea is to allocate all the space on heap and assign them.

I'm using seed VM on VirtualBox with 1GB base memory.
First, let me check my memory usage using "free" command.

![free -om](https://github.com/Usagi-Yojimbo-x/eatyoram/blob/main/free%20-om(1).png)

Total memory is around 1GB and used memory is 114MB which is about 8.19% of total.
Before running the program, type "watch free -om" in one terminal to watch the process.
Run the program in another terminal. "./eatyoram 1100"

If we dont add the argument, this will casue the infinity loop and malloc keep allocating on heap till there is no more. 
In my scenario, malloc will use 1220MB and linux will kill the process. 

![running the program](https://github.com/Usagi-Yojimbo-x/eatyoram/blob/main/Screenshot%20(74).png)

The programm uses about 1100MB which is 98.6% of total. We can round that to 99% :)
The reason that the program can use up to 1220MB, which is greater than base memory(1GB), is beacause of the swap partition in linux. 
So even if I use 1000MB, the result will be the same.

ref: https://www.linuxatemyram.com/
