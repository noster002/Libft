# Libft
42 School - Level00 - Libft

## Libc functions

+ isalpha
+ isdigit
+ isalnum
+ isascii
+ isprint
+ strlen
+ memset
+ bzero
+ memcpy
+ memmove
+ strlcpy
+ strlcat
+ toupper
+ tolower
+ strchr
+ strrchr
+ strncmp
+ memchr
+ memcmp
+ strnstr
+ atoi
+ calloc
+ strdup

## Additional functions

Function | Description
--- | ---
ft_substr | Allocates a substring from an existing string
ft_strjoin | Allocates a string by concatenating two strings
ft_strtrim | Allocates a trimmed copy of a larger string
ft_split | Allocates an array of strings by splitting a string using a delimiter
ft_itoa | Allocates a string representation of an integer
ft_strmapi | Allocates a string based on another string with each character being modified by a function
ft_striteri 
Prototype void ft_striteri(char *s, void (*f)(unsigned int,
char*));
Turn in files -
Parameters s: The string on which to iterate.
f: The function to apply to each character.
Return value None
External functs. None
Description Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.

• ft_putchar_fd
Prototype void ft_putchar_fd(char c, int fd);
Turn in files -
Parameters c: The character to output.
fd: The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the character ’c’ to the given file
descriptor.

• ft_putstr_fd
Prototype void ft_putstr_fd(char *s, int fd);
Turn in files -
Parameters s: The string to output.
fd: The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the string ’s’ to the given file
descriptor.

• ft_putendl_fd
Prototype void ft_putendl_fd(char *s, int fd);
Turn in files -
Parameters s: The string to output.
fd: The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the string ’s’ to the given file descriptor
followed by a newline.

• ft_putnbr_fd
Prototype void ft_putnbr_fd(int n, int fd);
Turn in files -
Parameters n: The integer to output.
fd: The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the integer ’n’ to the given file
descriptor.

