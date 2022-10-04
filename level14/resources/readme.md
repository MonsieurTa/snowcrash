We don't have any executable here
We have to exploit the getflag binary

> 0x08048dec <+1190>:  movl   $0x8049220,(%esp)
> 0x08048df3 <+1197>:  call   0x8048604 <ft_des>
>
> (gdb) x/s 0x8049220
> 0x8049220:       "g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|"
> (gdb) b main
> Breakpoint 1 at 0x804894a
> (gdb) run
> Starting program: /bin/getflag
>
> Breakpoint 1, 0x0804894a in main ()
> (gdb) p (char*)ft_des("g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|")
> $3 = 0x804c038 "7QiHafiNa3HVozsaXkawuYrTstxbpABHD8CPnHJ"

su flag14 7QiHafiNa3HVozsaXkawuYrTstxbpABHD8CPnHJ
