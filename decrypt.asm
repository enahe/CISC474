push ebp
mov ebp, esp
sub    DWORD PTR [ebp+0x8],0x26
xor    DWORD PTR [ebp+0x8],0x37
xor    DWORD PTR [ebp+0x8],0x11e61
not    DWORD PTR [ebp+0x8]
xor    DWORD PTR [ebp+0x8],0x7a69
add    DWORD PTR [ebp+0x8],0x18
mov eax, DWORD PTR [ebp+0x8]
pop ebp
ret



