#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
/*
    FILE * pFile;
  long lSize;
  char * buffer;
  size_t result;

  pFile = fopen ( "maino.c" , "rb" );
  if (pFile==NULL) {fputs ("File error",stderr); exit (1);}

  // obtain file size:
  fseek (pFile , 0 , SEEK_END);
  lSize = ftell (pFile);
  rewind (pFile);

  // allocate memory to contain the whole file:
  buffer = (char*) malloc (sizeof(char)*lSize);
  if (buffer == NULL) {fputs ("Memory error",stderr); exit (2);}
    puts(buffer);
  // copy the file into the buffer:
  result = fread (buffer,1,lSize,pFile);
  if (result != lSize) {fputs ("Reading error",stderr); exit (3);}

  /* the whole file is now loaded in the memory buffer. */

  /*terminate
  fclose (pFile);
  free (buffer);
  return 0;
  *//*
    FILE * pFile;
    char *line = NULL;

   char mystring[2100];

   pFile = fopen (argv[1] , "r");
   if (pFile == NULL) perror ("Error opening file");
   else
     while(!feof(pFile)){
        sscanf(line, argv[1], "%s");
        printf("%s\n", line);
      }
     fclose (pFile);

    printf("%d  \n", argc);
    if ((argc - 1)%3 != 0 ){
        printf("you miss some of the process values %d ",argc - 1);
        printf("%d ",(argc - 1)%3);
    }else
        printf("Congrat:! executation is ready ");
    for (int i= 1 ; i < argc ; i++){
        printf("%s \n",argv[i]);
    }

    */
    

  FILE* file = fopen (argv[1], "r");
  unsigned long long int i = 0;
    int x=0;
  fscanf (file, "%lld", &i);  
  while (!feof (file))
    {  
        for(int y=2 ;y <= i ;y++){
                if(i % y == 0){
                   x = i / y;
                printf("%lld=%d*%d \n", i,x,y);
                break;
                }else{continue;}
        }
                 
      //printf ("%d ", i);
      fscanf (file, "%lld", &i);      
    }
  fclose (file);        
/*
#include <stdint.h>
    const char *filename = argv[1];
      FILE *file = fopen(filename, "r");
      char line[256];
        int y;
        
      while (fgets(line, sizeof(line), file)) {
          uintptr_t number = (uintptr_t)line; 
          printf("%ld = %d * %d ", number ,0,0)/*
          for(int i=2 ;i < number ;i++){
                if(number % i == 0)
                   y = number / i;
                printf("%ld = %d * %d ", number ,y,i); }*/
    
}