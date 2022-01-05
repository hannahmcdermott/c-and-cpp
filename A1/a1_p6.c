/*
 CH-230-A
 a1_p5.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

 #include <stdio.h>
 int main() {
     char c = 'F';
     int ascii = (int)c; 
     printf("%c\n", ascii +3);
     printf("%d\n", ascii +3);
     return 0;
 }

 /* The ascii variable returns the ASCII code of the character variable c. The control string in the first printf 
 statement specifies it has to print the third character after c since it is formatted as a character (%c), 
 and the second printf statement specifies that it has to print the corresponding ASCII code, since it is 
 formatted as an integer (%d).*/