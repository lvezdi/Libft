<div align="center">
	<img src="https://img.shields.io/badge/norminette-passing-success"/>
	<img src="https://img.shields.io/badge/leaks-none-success" />
    <img src="https://img.shields.io/badge/bonus-included-success"/>
    <img src="https://img.shields.io/badge/-125%2F100-success?logo=42&logoColor=fff" />
    <img src="https://img.shields.io/badge/Change_Language-English-blue" align="right">
    <a href="https://github.com/lvezdi/Libft/blob/master/README.md">
    </a>
</div>
</div>

# Libft
Este proyecto en C tiene como propósito recrear una biblioteca de funciones estándar que resultan útiles en proyectos futuros. Estas funciones son esenciales para tareas comunes en programación y proporcionan una base sólida para construir aplicaciones más complejas.
### Lista de funciones:
#### Funciones de la biblioteca estándar (Libc):
- [`ft_isalpha`](https://github.com/lvezdi/Libft/blob/master/ft_isalpha.c): Verifica si un carácter es una letra del alfabeto.
- [`ft_isdigit`](https://github.com/lvezdi/Libft/blob/master/ft_isdigit.c): Verifica si un carácter es un dígito decimal.
- [`ft_isalnum`](https://github.com/lvezdi/Libft/blob/master/ft_isalnum.c): Verifica si un carácter es una letra o un dígito.
- [`ft_isascii`](https://github.com/lvezdi/Libft/blob/master/ft_isascii.c): Verifica si un carácter está dentro del rango ASCII.
- [`ft_isprint`](https://github.com/lvezdi/Libft/blob/master/ft_isprint.c): Verifica si un carácter es imprimible.
- [`ft_strlen`](https://github.com/lvezdi/Libft/blob/master/ft_strlen.c): Calcula la longitud de una cadena.
- [`ft_memset`](https://github.com/lvezdi/Libft/blob/master/ft_memset.c): Rellena una zona de memoria con un valor específico.
- [`ft_bzero`](https://github.com/lvezdi/Libft/blob/master/ft_bzero.c): Establece a cero los primeros n bytes de una zona de memoria.
- [`ft_memcpy`](https://github.com/lvezdi/Libft/blob/master/ft_memcpy.c): Copia n bytes de una zona de memoria a otra.
- [`ft_memmove`](https://github.com/lvezdi/Libft/blob/master/ft_memmove.c): Copia n bytes de una zona de memoria a otra, incluso si se superponen.
- [`ft_strlcpy`](https://github.com/lvezdi/Libft/blob/master/ft_strlcpy.c): Copia una cadena en un búfer de destino de tamaño especificado.
- [`ft_strlcat`](https://github.com/lvezdi/Libft/blob/master/ft_strlcat.c): Concatena dos cadenas en un búfer de destino de tamaño especificado.
- [`ft_toupper`](https://github.com/lvezdi/Libft/blob/master/ft_toupper.c): Convierte un carácter en mayúscula.
- [`ft_tolower`](https://github.com/lvezdi/Libft/blob/master/ft_tolower.c): Convierte un carácter en minúscula.
- [`ft_strchr`](https://github.com/lvezdi/Libft/blob/master/ft_strchr.c): Busca la primera aparición de un carácter en una cadena.
- [`ft_strrchr`](https://github.com/lvezdi/Libft/blob/master/ft_strrchr.c): Busca la última aparición de un carácter en una cadena.
- [`ft_strncmp`](https://github.com/lvezdi/Libft/blob/master/ft_strncmp.c): Compara los primeros n caracteres de dos cadenas.
- [`ft_memchr`](https://github.com/lvezdi/Libft/blob/master/ft_memchr.c): Busca la primera aparición de un byte en una zona de memoria.
- [`ft_memcmp`](https://github.com/lvezdi/Libft/blob/master/ft_memcmp.c): Compara los primeros n bytes de dos zonas de memoria.
- [`ft_strnstr`](https://github.com/lvezdi/Libft/blob/master/ft_strnstr.c): Busca una subcadena en una cadena.
- [`ft_atoi`](https://github.com/lvezdi/Libft/blob/master/ft_atoi.c): Convierte una cadena en un entero.
- [`ft_calloc`](https://github.com/lvezdi/Libft/blob/master/ft_calloc.c): Asigna memoria y la inicializa a cero.
- [`ft_strdup`](https://github.com/lvezdi/Libft/blob/master/ft_strdup.c): Duplica una cadena.
#### Funciones adicionales:
- [`ft_substr`](https://github.com/lvezdi/Libft/blob/master/ft_substr.c): Extrae una subcadena de una cadena.
- [`ft_strjoin`](https://github.com/lvezdi/Libft/blob/master/ft_strjoin.c): Concatena dos cadenas.
- [`ft_strtrim`](https://github.com/lvezdi/Libft/blob/master/ft_strtrim.c): Elimina los caracteres de espacio en blanco al principio y al final de una cadena.
- [`ft_split`](https://github.com/lvezdi/Libft/blob/master/ft_split.c): Divide una cadena en palabras utilizando un delimitador.
- [`ft_itoa`](https://github.com/lvezdi/Libft/blob/master/ft_itoa.c): Convierte un entero en una cadena.
- [`ft_strmapi`](https://github.com/lvezdi/Libft/blob/master/ft_strmapi.c): Aplica una función a cada carácter de una cadena.
- [`ft_striteri`](https://github.com/lvezdi/Libft/blob/master/ft_striteri.c): Aplica una función a cada carácter de una cadena con su índice.
#### Funciones del Bonus:
- [`ft_lstnew`](https://github.com/lvezdi/Libft/blob/master/ft_lstnew_bonus.c): Crea un nuevo nodo para una lista enlazada.
- [`ft_lstadd_front`](https://github.com/lvezdi/Libft/blob/master/ft_lstadd_front_bonus.c): Agrega un nodo al principio de una lista enlazada.
- [`ft_lstsize`](https://github.com/lvezdi/Libft/blob/master/ft_lstsize_bonus.c): Calcula el número de nodos en una lista enlazada.
- [`ft_lstlast`](https://github.com/lvezdi/Libft/blob/master/ft_lstlast_bonus.c): Devuelve el último nodo de una lista enlazada.
- [`ft_lstadd_back`](https://github.com/lvezdi/Libft/blob/master/ft_lstadd_back_bonus.c): Agrega un nodo al final de una lista enlazada.
- [`ft_lstdelone`](https://github.com/lvezdi/Libft/blob/master/ft_lstdelone_bonus.c): Elimina un nodo de una lista enlazada.
- [`ft_lstclear`](https://github.com/lvezdi/Libft/blob/master/ft_lstclear_bonus.c): Elimina todos los nodos de una lista enlazada.
- [`ft_lstiter`](https://github.com/lvezdi/Libft/blob/master/ft_lstiter_bonus.c): Aplica una función a cada nodo de una lista enlazada.
- [`ft_lstmap`](https://github.com/lvezdi/Libft/blob/master/ft_lstmap_bonus.c): Crea una nueva lista enlazada aplicando una función a cada nodo.
### Archivos:
- `Archivos de cabecera (.h)`: Crea un archivo .h que contenga solo las declaraciones de las funciones que deseas incluir en la biblioteca.
- `Archivos de implementación (.c)`: Crea un archivo .c para implementar el código de cada función.
- `Archivo Makefile`: Especifica cómo compilar y enlazar tu código.
  ### Compilación del Programa
La libft viene con un Makefile que incluye las siguientes reglas:
- `all`: compila la librería.
- `re`: recompila la librería.
- `clean`: elimina todos los ficheros objeto.
- `fclean`: elimina todos los ficheros objeto y `libft.a`.
