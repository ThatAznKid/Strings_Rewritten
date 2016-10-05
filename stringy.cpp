#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *s) {
	int i = 0;
	char *cp = s;
	while (*cp) {
		i++;
		cp++;
		//printf ("%d\n",i);
	}
	return i;
}
char* mystrncpy (char *dest , char *source , int n) {
	int i; 
	for (i = 0; i < n; i++) {
		dest[i] = source[i]; 
	}
	return dest;
}

char* mystrcat(char *dest, char* source) {
	int i = 0; 
	while (dest[i]) {
		i++;
	}
	int h = 0;
	for (i; source[h]; i++) {
		dest[i] = source[h]; 
		h++;
	}
	return dest;
}

int mystrncmp(char* s1, char* s2, int n) {
	int i;
	for (i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; ++i)
	{
		if ((s1[i] - s2[i]) != 0)
			return s1[i] - s2[i];
	}
	return 0;
}

char* mystrchr(char* s, char c) {
	int i;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == c) return (s + i);;
	}
	return 0;
}
int main() {

	char *s1 = "Hello!\0";
	char *s2 = "Hello!\0abcd";

	printf("Testing before function applications: \n");
	printf("s1: %s , has nothing written after terminating zero\n", s1);
	printf("s2: %s , has something written after terminating zero\n", s2);
	printf("Testing mystrlen with just a terminating zero...\n");
	printf("Length of s1: %d\n", mystrlen(s1));
	printf("s1: %s\n", s1);
	printf("Official strlen(): %d\n\n", strlen(s1));

	printf("Testing mystrlen with things written after the terminating zero...\n");
	printf("Length of s2: %d\n", mystrlen(s2));
	printf("s2: ");
	printf(s2);
	printf("\n");
	printf("Official strlen(): %d\n\n", strlen(s2));

	char s3[100] = "Suns";
	char *s4 = "Moon";
	printf("Testing mystrncpy...\n");
	printf("Before: \n");
	printf("s3: %s\t s4: %s\n", s3, s4);
	printf("After: \n");
	printf("Testing mystrncpy(s3,s4,4) -> s3: %s\n\n", mystrncpy(s3, s4, 4));

	char s5[100] = "Hello";
	char *s6 = "World";
	printf("Testing mystrcat...\n");
	printf("Before: \n");
	printf("s5: %s\t s6: %s\n", s5, s6);
	printf("After: \n");
	printf("Testing mystrcat(s5,s6) -> %s\n\n", mystrcat(s5,s6));

	char s7[100] = "abd";
	char *s8 = "abc";
	printf("Testing mystrncmp...\n");
	printf("Before: \n");
	printf("s7: %s\t s8: %s\n", s7, s8);
	printf("After: \n");
	printf("Testing mystrncmp(s7,s8,2) -> %d\n", mystrncmp(s7, s8, 2));
	printf("Testing mystrncmp(s7,s8,3) -> %d\n\n", mystrncmp(s7, s8, 3));

	char s9[] = "Pokeman";
	char s10 = 'o';
	printf("Testing mystrchr...\n");
	printf("Before: \n");
	printf("s9: %s\n", s9);
	printf("Finding the o in Pokemon: %s\n", mystrchr(s9,s10));

	return 0; 
}
