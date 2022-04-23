#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * *_strcat - concatenates two strings
 * *_strncat - appends n bytes of src to dest
 * *_strncpy - copies a string
 * _strcmp - compares two strings
 * reverse_array - reverses an array
 * *string_toupper - change lowercase letters to uppercase
 * *cap_string - convert lowercase after a separator to uppercase
 * *leet - encodes a string into 1337
 * *rot13 - encodes a string using rot13
 * print_number - prints an integer
 */
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);