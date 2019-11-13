call shellcode 
.string "Hello, world!"
.string "/tmp/hello.txt"
shellcode:
xor eax, eax
xor ebx, ebx
xor ecx, ecx
xor edx, edx
mov eax, 4
pop ebx
pop ecx
mov edx, 14
int 0x80

mov eax, 1
mov ebx, 0
int 0x80



