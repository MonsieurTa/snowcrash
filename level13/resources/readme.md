two methods

# with LD_PRELOAD

`cp level13 ok`

go to `/tmp` and create a getuid32.c file

```
#include <unistd.h>
#include <sys/types.h>

uid_t getuid(void) {
        return 4242;
}
```

compile it with `gcc -shared getuid32.c -o getuid32.so`
`export LD_PRELOAD="/tmp/getuid32.so"`

go back to home

`./ok`

your token is 2A31L79asukciNyi8uppkEuSx

# with gdb

(gdb) disas main
Dump of assembler code for function main:
   0x0804858c <+0>:     push   %ebp
   0x0804858d <+1>:     mov    %esp,%ebp
   0x0804858f <+3>:     and    $0xfffffff0,%esp
   0x08048592 <+6>:     sub    $0x10,%esp
   0x08048595 <+9>:     call   0x8048380 <getuid@plt>
   0x0804859a <+14>:    cmp    $0x1092,%eax
   0x0804859f <+19>:    je     0x80485cb <main+63>
   0x080485a1 <+21>:    call   0x8048380 <getuid@plt>
   0x080485a6 <+26>:    mov    $0x80486c8,%edx
   0x080485ab <+31>:    movl   $0x1092,0x8(%esp)
   0x080485b3 <+39>:    mov    %eax,0x4(%esp)
   0x080485b7 <+43>:    mov    %edx,(%esp)
   0x080485ba <+46>:    call   0x8048360 <printf@plt>
   0x080485bf <+51>:    movl   $0x1,(%esp)
   0x080485c6 <+58>:    call   0x80483a0 <exit@plt>
   0x080485cb <+63>:    movl   $0x80486ef,(%esp)
   0x080485d2 <+70>:    call   0x8048474 <ft_des>
   0x080485d7 <+75>:    mov    $0x8048709,%edx
   0x080485dc <+80>:    mov    %eax,0x4(%esp)
   0x080485e0 <+84>:    mov    %edx,(%esp)
   0x080485e3 <+87>:    call   0x8048360 <printf@plt>
   0x080485e8 <+92>:    leave  
   0x080485e9 <+93>:    ret    
End of assembler dump.
(gdb) p 0x1092
$1 = 4242
(gdb) x/s 0x80486ef
0x80486ef:       "boe]!ai0FB@.:|L6l@A?>qJ}I"
(gdb) b main
Breakpoint 1 at 0x804858f
(gdb) run
Starting program: /home/user/level13/level13 

Breakpoint 1, 0x0804858f in main ()
(gdb) p (char*)ft_des("boe]!ai0FB@.:|L6l@A?>qJ}I")
$2 = 0x804b028 "2A31L79asukciNyi8uppkEuSx"
(gdb) 
