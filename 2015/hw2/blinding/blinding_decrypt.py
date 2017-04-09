# Kai b01901169

import base64
from pwn import *

c_hex = 0x1c9d992fd1c6c9f26b24fb127e3e1ac343eadb0dad36c27747111ad07238bf9bc76d16737f8f7fc6752df563027fc6614a8c803de38bbe6aefca0e7f3ec739ba4

c = 23979544953678995962265179582000801918518902984597041760065714623849253214738436893572249868947533211971186632223373431749730677374838632131809250729237412 

n = 29483112906907846550407371381907804051925957834404110624325531950200215274674279351500117069061279396866776918114198748748643519779529947303729199772247349
e = 65537

c2 = (pow(2,e,n) * c) % n

r = remote('csie.ctf.tw',10119)
r.send(str(c2)+'\n')
tmp = r.recvline()
r.close()
tmp = int(tmp)
if tmp % 2 == 0:
  tmp /= 2
else:
  tmp = (tmp + n)/2
a = hex(tmp)
ans = a[2:len(a)].decode("hex")
print ans
