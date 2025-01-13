<div align="center">
	<img src="https://img.shields.io/badge/norminette-passing-success"/>
	<img src="https://img.shields.io/badge/leaks-none-success" />
    	<img src="https://img.shields.io/badge/bonus-included-success"/>
    	<img src="https://img.shields.io/badge/-125%2F100-success?logo=42&logoColor=fff" />
  	<a href="https://github.com/lvezdi/Libft/blob/master/Documentation/README.md" >
   	<img src="https://img.shields.io/badge/Cambiar_Idioma-Español-blue" align="right"></a>
</div>

# Libft
This C project aims to recreate a library of standard functions that are useful in future projects. These functions are essential for common programming tasks and provide a solid foundation for building more complex applications.
### List of functions:
#### Standard library functions (Libc):
- [`ft_isalpha`](https://github.com/lvezdi/Libft/blob/master/ft_isalpha.c): Checks if a character is a letter of the alphabet.
- [`ft_isdigit`](https://github.com/lvezdi/Libft/blob/master/ft_isdigit.c): Check if a character is a decimal digit.
- [`ft_isalnum`](https://github.com/lvezdi/Libft/blob/master/ft_isalnum.c): Checks if a character is a letter or a digit.
- [`ft_isascii`](https://github.com/lvezdi/Libft/blob/master/ft_isascii.c): Checks if a character is within the ASCII range.
- [`ft_isprint`](https://github.com/lvezdi/Libft/blob/master/ft_isprint.c): Checks if a character is printable.
- [`ft_strlen`](https://github.com/lvezdi/Libft/blob/master/ft_strlen.c): Calculates the length of a string.
- [`ft_memset`](https://github.com/lvezdi/Libft/blob/master/ft_memset.c): Fills a memory area with a specific value.
- [`ft_bzero`](https://github.com/lvezdi/Libft/blob/master/ft_bzero.c): Sets the first n bytes of a memory area to zero.
- [`ft_memcpy`](https://github.com/lvezdi/Libft/blob/master/ft_memcpy.c): Copies n bytes from one memory area to another.
- [`ft_memmove`](https://github.com/lvezdi/Libft/blob/master/ft_memmove.c): Copies n bytes from one memory area to another, even if they overlap.
- [`ft_strlcpy`](https://github.com/lvezdi/Libft/blob/master/ft_strlcpy.c): Copies a string to a destination buffer of specified size.
- [`ft_strlcat`](https://github.com/lvezdi/Libft/blob/master/ft_strlcat.c): Concatenates two strings into a target buffer of specified size.
- [`ft_toupper`](https://github.com/lvezdi/Libft/blob/master/ft_toupper.c): Converts a character to uppercase.
- [`ft_tolower`](https://github.com/lvezdi/Libft/blob/master/ft_tolower.c): Converts a character to lower case.
- [`ft_strchr`](https://github.com/lvezdi/Libft/blob/master/ft_strchr.c): Searches for the first occurrence of a character in a string.
- [`ft_strrchr`](https://github.com/lvezdi/Libft/blob/master/ft_strrchr.c): Find the last occurrence of a character in a string.
- [`ft_strncmp`](https://github.com/lvezdi/Libft/blob/master/ft_strncmp.c): Compares the first n characters of two strings.
- [`ft_memchr`](https://github.com/lvezdi/Libft/blob/master/ft_memchr.c): Finds the first occurrence of a byte in a memory area.
- [`ft_memcmp`](https://github.com/lvezdi/Libft/blob/master/ft_memcmp.c): Compares the first n bytes in two memory areas.
- [`ft_strnstr`](https://github.com/lvezdi/Libft/blob/master/ft_strnstr.c): Searches for a substring in a string.
- [`ft_atoi`](https://github.com/lvezdi/Libft/blob/master/ft_atoi.c): Converts a string to an integer.
- [`ft_calloc`](https://github.com/lvezdi/Libft/blob/master/ft_calloc.c): Allocates memory and initializes it to zero.
- [`ft_strdup`](https://github.com/lvezdi/Libft/blob/master/ft_strdup.c): Duplicates a string.
#### Additional functions:
- [`ft_substr`](https://github.com/lvezdi/Libft/blob/master/ft_substr.c): Extracts a substring from a string.
- [`ft_strjoin`](https://github.com/lvezdi/Libft/blob/master/ft_strjoin.c): Concatenates two strings.
- [`ft_strtrim`](https://github.com/lvezdi/Libft/blob/master/ft_strtrim.c): Removes whitespace characters at the beginning and end of a string.
- [`ft_split`](https://github.com/lvezdi/Libft/blob/master/ft_split.c): Splits a string into words using a delimiter.
- [`ft_itoa`](https://github.com/lvezdi/Libft/blob/master/ft_itoa.c): Converts an integer to a string.
- [`ft_strmapi`](https://github.com/lvezdi/Libft/blob/master/ft_strmapi.c): Applies a function to each character in a string.
- [`ft_striteri`](https://github.com/lvezdi/Libft/blob/master/ft_striteri.c): Applies a function to each character in a string with its index.
#### Bonus functions:
- [`ft_lstnew`](https://github.com/lvezdi/Libft/blob/master/ft_lstnew_bonus.c): Creates a new node for a linked list.
- [`ft_lstadd_front`](https://github.com/lvezdi/Libft/blob/master/ft_lstadd_front_bonus.c): Adds a node to the front of a linked list.
- [`ft_lstsize`](https://github.com/lvezdi/Libft/blob/master/ft_lstsize_bonus.c): Calculates the number of nodes in a linked list.
- [`ft_lstlast`](https://github.com/lvezdi/Libft/blob/master/ft_lstlast_bonus.c): Returns the last node in a linked list.
- [`ft_lstadd_back`](https://github.com/lvezdi/Libft/blob/master/ft_lstadd_back_bonus.c): Adds a node to the end of a linked list.
- [`ft_lstdelone`](https://github.com/lvezdi/Libft/blob/master/ft_lstdelone_bonus.c): Removes a node from a linked list.
- [`ft_lstclear`](https://github.com/lvezdi/Libft/blob/master/ft_lstclear_bonus.c): Removes all nodes from a linked list.
- [`ft_lstiter`](https://github.com/lvezdi/Libft/blob/master/ft_lstiter_bonus.c): Applies a function to each node in a linked list.
- [`ft_lstmap`](https://github.com/lvezdi/Libft/blob/master/ft_lstmap_bonus.c): Creates a new linked list by applying a function to each node.
### Files:
- `Header files (.h)`: Create an .h file containing only the declarations of the functions you want to include in the library.
- `Implementation (.c) files`: Create a .c file to implement the code for each function.
- `Makefile`: Specify how to compile and link your code.
### Compiling the Program
The libft comes with a Makefile that includes the following rules:
- `all`: compiles the library.
- `re`: recompiles the library.
- `clean`: removes all object files.
- `fclean`: removes all object files and `libft.a`.
