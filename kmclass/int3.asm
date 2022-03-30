.CODE

AsmInt3 PROC
  int 3
  ret
AsmInt3 ENDP

KhpGetCr0 PROC
mov rax, cr0
ret
KhpGetCr0 ENDP

KhpSetCr0 PROC
mov cr0, rcx
ret
KhpSetCr0 ENDP

END