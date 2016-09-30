#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen (char *s) {
  int i = 0;
  char *cp = s;
  while (*cp) {
    i++;
    cp++;
    //printf ("%d\n",i);
  }
  return i;  
}

/*
char * strcpy (char *dest , char *source) {
  
}
*/

int main () {

  char *s1 = "Hello!\0";
  char *s2 = "Hello!\0abcd";

  printf ("Testing mystrlen with just a terminating zero...\n"); 
  printf ("Length of s1: %d\n" , mystrlen (s1));
  printf ("s1: %s\n" , s1);
  printf ("Official strlen(): %d\n\n" , strlen(s1));

  printf ("Testing mystrlen with things written after the terminating zero...\n");
  printf ("Length of s2: %d\n" , mystrlen (s2));
  printf ("s2: " );
  printf (s2);
  printf ("\n");
  printf ("Official strlen(): %d\n" , strlen(s2));
  
  char s3[100] = "Sun";
  char *s4 = "Moon";
  printf ("Testing strcpy...\n");
  strcpy (s3,s4);
  printf (s3);
  printf ("\n");
  printf (s4);
  printf ("\n");
  
  return 0;
} 
