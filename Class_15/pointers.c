#include <stdio.h>

int main ()
{
  int i_value = 8963;
  printf("i_value (found by identification) = %d\n", i_value);
  printf("sizeof(i_value) = %ld (bytes)\n",sizeof(i_value));
 
  int *i_pointer = &i_value;
  printf("\ni_pointer (address) = %p\n", i_pointer);
  printf("i_value (found by address) = %d\n",*i_pointer); 
  printf("sizeof(i_pointer) = %ls(bytes)\n", i_pointer); 
  
/*  *i_pointer = (*i_pointer)++;  inkrements šeit nestrādā, jo primkārt
                                  tam ir zemāka prioritāte, otrkārt, izgūtā vertība
                                  iekš () vairs nav saistīta ne ar kādu mainīgo, kuram šī inkrementa operācija tiktu veikta
                                  
*/

  *i_pointer = (*i_pointer)+1 ;
  printf("\ni_value (found by identificator; after increment) = %d\n",i_value);

double d_value = 1.3e-3;
printf("\n\nd_value (found by identificator) = %f\n", d_value);
printf("sizeof(d_value) = %ld (bytes)\n",sizeof(d_value));

double *d_pointer = &d_value;
printf("\nd_pointer (address) = %p\n",d_pointer);
printf("d_value (found by address) = %f\n", *d_pointer);
printf("sizeof(d_pointer) = %ld (bytes)\n",sizeof(d_pointer));

*d_pointer = (*d_pointer)+0.25;
printf("\nd_value (found by identificator; after change) = %f\n", d_value);

return 0;
}
