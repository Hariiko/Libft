# Libft
Este proyecto trata de hacer una librería personalizada replicando funciones que tenemos, tenemos la parte obligatoria y la parte bonus. Aquí explicaré de que trata cada función.

# Obligatoria

· ft_atoi : Convierte una cadena de caracteres (string) y lo pasa a un valor entero (int).

· ft_bzero : Establece un bloque de memoria y a partir de una dirección de memoria dada, lo convierte en valores nulos (bytes de valor 0).

· ft_calloc : Asignar bloques de memoria y establecer todos sus bytes a cero. 

· ft_isalnum : Determina si el carácter es alfanumérico, si es una letra (mayúscula o minúscula) o un dígito.

· ft_isalpha : Determina si el carácter es una letra (mayúscula o minúscula).

· ft_isascii : Verifica si el carácter dado pertenece al conjunto ASCII válidos (0 - 127).

· ft_isdigit : Verifica si el carácter es un dígito, pero va del 0 - 9.

· ft_isprint : Comprueba si el carácter es un carácter imprimible del conjunto de caracteres ASCII.

· ft_itoa : Convierte de un número entero (int) a una cadena de caracteres (string).

· ft_memchr : Busca la primera aparición de un byte específico en un bloque de memoria.

· ft_memcmp : Compara los bloques de memoria byte a byte.

· ft_memcpy : Copia un bloque de memoria desde una ubicación fuente a una ubicación de destino.

· ft_memmove : Copia un bloque de memoria desde una ubicación fuente a una ubicación de destino, incluso si las áreas de     
      memoria se solapan.

· ft_memset : Establece todos los bytes de un bloque de memoria a un valor específico.

· ft_putchar_fd : Imprime por pantalla un solo carácter.

· ft_putendl_fd : Imprime por pantalla una cadena de caracteres (string) con un salto de línea.

· ft_putnbr_fd : Imprime por pantalla un número entero (int).

· ft_putstr_fd : Imprime por pantalla una cadena de caracteres (string) sin salto de línea.

· ft_split : Divide de una cadena de caracteres (string) a subcadenas de array basado en un delimitador específico.

· ft_strchr : Busca la primera aparición de un carácter específico en una cadena de caracteres (string).

· ft_strdup : Duplica una cadena de caracteres (string).

· ft_striteri : Recorre cada carácter de una cadena de caracteres y aplica una función dada a cada carácter junto con su índice.

· ft_strjoin : Une dos cadenas de caracteres y crea una nueva cadena.

· ft_strlcpy : Copia las cadenas de caracteres (string) de manera segura, evitando desbordamientos de búfer. A diferencia de strcpy, strlcpy toma el tamaño del búfer de destino como argumento y garantiza que la cadena de destino esté terminada correctamente con el carácter nulo \0.

· ft_strlen : Calcular la longitud de una cadena de caracteres (string).

· ft_strmapi : Aplica una función dada a cada carácter de una cadena de caracteres y devuelve una nueva cadena basada en los resultados de esas aplicaciones.

· ft_strncmp : Compara los primeros n caracteres de dos cadenas de caracteres.

· ft_strlcat : Une dos cadenas de manera segura, evitando desbordamientos de búfer.

· ft_strnstr : Busca la primera aparición de una subcadena en una cadena, pero con un límite máximo en el número de caracteres a examinar.

· ft_strrchr : Busca la última aparición de un carácter específico en una cadena de caracteres (string).

· ft_strtrim : Elimina los caracteres especificados al principio y al final de una cadena de caracteres (string).

· ft_substr :  Extrae una subcadena de una cadena de caracteres (string) desde una posición de inicio y con una longitud dada.

· ft_tolower : Convierte un carácter en minúscula si es una letra mayúscula.

· ft_toupper : Convierte un carácter en mayúscula si es una letra minúscula.

# Bonus
Esta parte se trata de listas enlazadas, una lista enlazada es una colección de nodos, donde cada nodo contiene un elemento de datos y un puntero al siguiente nodo en la secuencia. La lista termina con un puntero nulo, indicando el final de la lista.  

Así sería la estructura de un nodo:

typedef struct s_list
{

void			*content;

struct s_list	*next;

}	t_list;

· ft_lstadd_back_bonus : Agrega un nuevo elemento al final de la lista enlazada.

· ft_lstadd_front_bonus : Agrega un nuevo elemento al principio de la lista enlazada.

· ft_lstclear_bonus : Libera la memoria asociada con una lista enlazada y, opcionalmente, aplicar una función para liberar la memoria de los contenidos de cada elemento.

· ft_lstdelone_bonus : Libera la memoria asociada a un solo nodo de la lista enlazada y, opcionalmente, aplicar una función para liberar la memoria de los contenidos del nodo.

· ft_lstiter_bonus : Aplica una función a cada elemento de la lista enlazada.

· ft_lstlast_bonus : Obtiene el puntero al último nodo de la lista enlazada.

· ft_lstmap_bonus : Crea una nueva lista aplicando una función dada a cada elemento de la lista original.

· ft_lstnew_bonus : Crea un nuevo nodo (elemento) de la lista con un contenido dado.

· ft_lstsize_bonus : Obtiene el tamaño (número de elementos) de la lista enlazada.
