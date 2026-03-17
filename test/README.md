Creating a _printf function to work the same as printf

CURRENTLY
#########
prints chracters, along with prints the value after %

GOAL
####
read the value after % to dictate what action is used next
use the value to run a sub function for each c/s/%/d/i
most likely use another .c to have all the subfunctions inside to deal with each of the letters


STRUCT
######
_printf.c | printf function 
main.h | header with prototypes 
main.c | testing printf

simple sentence | YES
%d | YES
%i | YES
%u | YES
%o | NO
%x | NO
%X | NO
%c | NO
%s | NO
%p | NO
%% | NO
%r | NO

NOTE: length counts fail for when % before value
