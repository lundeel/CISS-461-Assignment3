Task 2: 
long_str[19]: 33
long_str[0]: 33
long_str: 0xb7e1fc34
b: 2
a: 1
return address: 0x080484f2
previous frame pointer: 0xbfff09e
buffer1[63]: bffff09e
buffer1[0]: 33
buffer2[127]: 0x00000000
buffer2[0]: 0x00000000
x: 1
y: 2

Task 3:
1. info sources
2. 2 frames. The first is for function boo. This function then calls the function foo creating the second frame.
3. foo:
buffer1: 0xbffff008
buffer2: 0xbfffef88
x: 0xbfffef84
y: 0xbfffef80
base frame pointer: 0xbffff078

boo:
a: 0xbffff07c
b: 0xbffff078
base frame pointer: 0xbffff09e
4. 0x0804851b
5. I don't understand this question. There are 9 words between the end of buffer1 and the return address. 0x00000024 bytes.
6. 0x0804852b

Task 4:
Since the result of validating the password is stored in a local variable that is positioned on the stack just above the string that we can overflow it is a simple matter of entering a string with 17 characters where the last character has the value 1. The easiest way to check the length of the string to make sure it isn't larger than the buffer before copying.

2. Theoretically any string that is 17 characters long where the last character is \x01. This value would overflow into higher memory where the auth_flag variable is stored.

4. I was unable to execute the attack. I have no idea if the issue is with my string, my code that sets the environment variable, or with my virtual machine setup. I have tried everything I could think of and there are still a lot of errors. If you could look over my code and give me an idea of where the issues are I would appreciate that.