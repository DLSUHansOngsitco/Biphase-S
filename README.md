# Biphase-S
Encoder and decoder algorithm for Biphase-S in C
Made by Hans Ongsitco

For biphase-space (biphase-s) Encoding:
  Signal change at start of every bit
  If the bit is 0, signal changes at the middle of the bit
  
For decoding:
  Half bits with opposing signals are decoded to 0
  Half bits with same signals are decoded to 1

source: http://www.ece.unb.ca/cgi-bin/tervo/encoding.pl
