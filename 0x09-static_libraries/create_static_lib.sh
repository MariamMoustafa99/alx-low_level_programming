#!/bin/bash
gcc -wall -pendatic -Werror -Wextra -c *.c
ar -rc liball.a *.c
ranlib liball.a

