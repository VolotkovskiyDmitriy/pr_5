#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv){
 if (argc < 2){
  printf (" Too few arguments\n");
  exit (1);
 }
 char * var = getenv (argv[1]);
 if (var == NULL){
  printf ("'%s' not found\n", argv[1]);
  exit (0);
 }
 printf ("'%s=%s' found\n", argv[1], var);
 exit (0);
}
