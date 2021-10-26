#!/bin/sh
find . -name "*.c" -type f -exec gcc -Wall -Wextra -Werror -c {} \;
ar -rcs libft.a *.o
rm *.o
