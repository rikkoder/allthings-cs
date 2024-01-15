# Caesar Cipher

## Introduction
In cryptography, a Caesar cipher, also known as Caesar's cipher, the shift cipher, Caesar's code, or Caesar shift, is one of the simplest and most widely known encryption techniques. The method is named after Julius Caesar, who used it in his private correspondence.

## Working
The action of a Caesar cipher is to replace each plaintext letter with a different one a fixed number of places down the alphabet.
![(caesar-cipher-example)](https://ds055uzetaobb.cloudfront.net/brioche/uploads/7kJpXQqFoJ-800px-caesar3svg.png?width=1200)

## Example
Here is a Caesar cipher using a left rotation of three places, equivalent to a right shift of 23 (the shift parameter is used as the key):
```
Plaintext:  THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG
Ciphertext: QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD
```
Deciphering is done in reverse, with a right shift of 3. 

## More to read
[Wikipedia](https://en.wikipedia.org/wiki/Caesar_cipher)
[brilliant.org](https://brilliant.org/wiki/caesar-cipher/)
