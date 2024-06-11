# Libft :tw-1f1ec-1f1e7:
This C project aims to recreate a library of standard functions that are useful in future projects. These functions are essential for common programming tasks and provide a solid foundation for building more complex applications. 

### List of functions: 
#### Standard library functions (Libc):
- ft_isalpha: Checks if a character is a letter of the alphabet.
- ft_isdigit: Check if a character is a decimal digit.
- ft_isalnum: Checks if a character is a letter or a digit.
- ft_isascii: Checks if a character is within the ASCII range.
- ft_isprint: Checks if a character is printable.
- ft_strlen: Calculates the length of a string.
- ft_memset: Fills a memory area with a specific value.
- ft_bzero: Sets the first n bytes of a memory area to zero.
- ft_memcpy: Copies n bytes from one memory area to another.
- ft_memmove: Copies n bytes from one memory area to another, even if they overlap.
- ft_strlcpy: Copies a string to a destination buffer of specified size.
- ft_strlcat: Concatenates two strings into a target buffer of specified size.
- ft_toupper: Converts a character to uppercase.
- ft_tolower: Converts a character to lower case.
- ft_strchr: Searches for the first occurrence of a character in a string.
- ft_strrchr: Find the last occurrence of a character in a string.
- ft_strncmp: Compares the first n characters of two strings.
- ft_memchr: Finds the first occurrence of a byte in a memory area.
- ft_memcmp: Compares the first n bytes in two memory areas.
- ft_strnstr: Searches for a substring in a string.
- ft_atoi: Converts a string to an integer.
- ft_calloc: Allocates memory and initializes it to zero.
- ft_strdup: Duplicates a string.
#### Additional functions:
- ft_substr: Extracts a substring from a string.
- ft_strjoin: Concatenates two strings.
- ft_strtrim: Removes whitespace characters at the beginning and end of a string.
- ft_split: Splits a string into words using a delimiter.
- ft_itoa: Converts an integer to a string.
- ft_strmapi: Applies a function to each character in a string.
- ft_striteri: Applies a function to each character in a string with its index.
#### Bonus functions:
- ft_lstnew: Creates a new node for a linked list.
- ft_lstadd_front: Adds a node to the front of a linked list.
- ft_lstsize: Calculates the number of nodes in a linked list.
- ft_lstlast: Returns the last node in a linked list.
- ft_lstadd_back: Adds a node to the end of a linked list.
- ft_lstdelone: Removes a node from a linked list.
- ft_lstclear: Removes all nodes from a linked list.
- ft_lstiter: Applies a function to each node in a linked list.
- ft_lstmap: Creates a new linked list by applying a function to each node.

### Files:
- Header files (.h): Create an .h file containing only the declarations of the functions you want to include in the library.
- Implementation (.c) files: Next, create a .c file to implement the code for each function.
- Makefile: Specify how to compile and link your code.


# Libft :tw-1f1ea-1f1f8:
Este proyecto en C tiene como propósito recrear una biblioteca de funciones estándar que resultan útiles en proyectos futuros. Estas funciones son esenciales para tareas comunes en programación y proporcionan una base sólida para construir aplicaciones más complejas. 

### Lista de funciones: 
#### Funciones de la biblioteca estándar (Libc):
- ft_isalpha: Verifica si un carácter es una letra del alfabeto.
- ft_isdigit: Verifica si un carácter es un dígito decimal.
- ft_isalnum: Verifica si un carácter es una letra o un dígito.
- ft_isascii: Verifica si un carácter está dentro del rango ASCII.
- ft_isprint: Verifica si un carácter es imprimible.
- ft_strlen: Calcula la longitud de una cadena.
- ft_memset: Rellena una zona de memoria con un valor específico.
- ft_bzero: Establece a cero los primeros n bytes de una zona de memoria.
- ft_memcpy: Copia n bytes de una zona de memoria a otra.
- ft_memmove: Copia n bytes de una zona de memoria a otra, incluso si se superponen.
- ft_strlcpy: Copia una cadena en un búfer de destino de tamaño especificado.
- ft_strlcat: Concatena dos cadenas en un búfer de destino de tamaño especificado.
- ft_toupper: Convierte un carácter en mayúscula.
- ft_tolower: Convierte un carácter en minúscula.
- ft_strchr: Busca la primera aparición de un carácter en una cadena.
- ft_strrchr: Busca la última aparición de un carácter en una cadena.
- ft_strncmp: Compara los primeros n caracteres de dos cadenas.
- ft_memchr: Busca la primera aparición de un byte en una zona de memoria.
- ft_memcmp: Compara los primeros n bytes de dos zonas de memoria.
- ft_strnstr: Busca una subcadena en una cadena.
- ft_atoi: Convierte una cadena en un entero.
- ft_calloc: Asigna memoria y la inicializa a cero.
#### Funciones adicionales:
- ft_strdup: Duplica una cadena.
- ft_substr: Extrae una subcadena de una cadena.
- ft_strjoin: Concatena dos cadenas.
- ft_strtrim: Elimina los caracteres de espacio en blanco al principio y al final de una cadena.
- ft_split: Divide una cadena en palabras utilizando un delimitador.
- ft_itoa: Convierte un entero en una cadena.
- ft_strmapi: Aplica una función a cada carácter de una cadena.
- ft_striteri: Aplica una función a cada carácter de una cadena con su índice.
#### Funciones del Bonus:
- ft_lstnew: Crea un nuevo nodo para una lista enlazada.
- ft_lstadd_front: Agrega un nodo al principio de una lista enlazada.
- ft_lstsize: Calcula el número de nodos en una lista enlazada.
- ft_lstlast: Devuelve el último nodo de una lista enlazada.
- ft_lstadd_back: Agrega un nodo al final de una lista enlazada.
- ft_lstdelone: Elimina un nodo de una lista enlazada.
-  ft_lstclear: Elimina todos los nodos de una lista enlazada.
- ft_lstiter: Aplica una función a cada nodo de una lista enlazada.
-  ft_lstmap: Crea una nueva lista enlazada aplicando una función a cada nodo.

### Archivos:
- Archivos de cabecera (.h): Crea un archivo .h que contenga solo las declaraciones de las funciones que deseas incluir en la biblioteca.
- Archivos de implementación (.c): Luego, crea un archivo .c para implementar el código de cada función.
- Archivo Makefile: Especifica cómo compilar y enlazar tu código.
