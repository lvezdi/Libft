# Libft
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
