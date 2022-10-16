#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv){
 if (argc < 2){
  printf (" Too few arguments\n");
  exit (1);
 }
 
int var = setenv (argv[1], argv[2], 0);
 if (var == -1){
  printf ("'%s' error\n", argv[1]);
  exit (0);
 }
 printf ("setenv '%s=%s' \n", argv[1], argv[2]);
 char *var1 = getenv (argv[1]);
 printf ("getenv '%s=%s' \n", argv[1], var1);
 exit (0);
}
