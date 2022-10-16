#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv){
 if (argc == 1){
    clearenv();  
    system("printenv");
    exit (1);
  }
 if (argc < 2){
  printf (" Too few arguments\n");
  exit (1);
 }
 setenv("HELLO","Y", 1);
 char *var1 = getenv (argv[1]);
 printf ("getenv '%s=%s' \n", argv[1], var1);
 int var = unsetenv (argv[1]);
 	if (var == -1){
  		printf ("'%s' error\n", argv[1]);
 		 exit (0);
 	}
 printf (" '%s cleared' \n", argv[1]);
 var1 = getenv (argv[1]);
 printf ("getenv '%s=%s' \n", argv[1], var1);
 exit (0);
}
