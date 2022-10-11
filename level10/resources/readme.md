Use gdb to disassemble the main function
We can see there is a call to access that we can exploit
We can use the TOCTOU (Time of Check Time of Use) method to do so
 
Use the following command to listen to TCP requests
> netcat -lk 6969

And then use the script to brute force the access to `token` file