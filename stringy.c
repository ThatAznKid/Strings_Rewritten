#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen (char *s) {
  int i = 0;
  char *cp = s;
  while (*cp) {
    i++;
    cp++;
    printf ("%d\n",i);
  }
  return i;  
}

int main () {

  char *s1 = "Hello!\0";
  printf ("Length of s1: %d\n:" , mystrlen (s1));
  return 0;

} 
