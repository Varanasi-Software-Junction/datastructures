#include <stdio.h>
#include <stdlib.h>
typedef struct  {
   int rollno;
   char crname[80];
}CR;
int main () {
   FILE* fp;
   fp= fopen ("crs.jaunpur", "w");
   if (fp == NULL) {
      printf("Could not create file");
      return 0;
   }
   CR cr1 = {420, "Shubham"};
   CR cr2 = {840, "Harsh"};
   fwrite (&cr1, sizeof(CR), 1, fp);
   fwrite (&cr2, sizeof(CR), 1, fp);
   if(fwrite == 0)
   {
       printf("Could not write CRs\n");
       return 0;
   }
    fflush(fp);
   fclose (fp);
   CR cr;
   fp = fopen ("crs.jaunpur", "r");
   if (fp == NULL) {
      printf("\nCould not open CRs file\n");
      return 0;
   }
   int n=fread(&cr, sizeof(CR), 1, fp);
   while(n)
   {
      printf ("rollno = %d name = %s\n", cr.rollno, cr.crname);
      n=fread(&cr, sizeof(CR), 1, fp);
   }
   fclose (fp);
   return 0;

}