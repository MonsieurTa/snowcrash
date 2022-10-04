Find the first file that can be run by user flag00
Command

```
level00@SnowCrash:~$ find / -user flag00 2>/dev/null -ls
 10982    4 ----r--r--   1 flag00   flag00         15 Mar  5  2016 /usr/sbin/john
 37740    1 ----r--r--   1 flag00   flag00         15 Mar  5  2016 /rofs/usr/sbin/john
```

cat the first file and got `cdiiddwpgswtgt` and then used dcode.fr to decode it with rot15

su flag00:nottoohardhere
