cat /etc/passwd

one line is sus
```
flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash
```
use john to decrypt the encrypted password

```
echo "42hDRfypTqqnw" > pw; john pw --show

?:abcdefg
```

su flag01:abcdefg
