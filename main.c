#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv){
	int i=0,suma=0,size=1,mayor,menor,d=0;
	double promedio,desv=0,sumatoria=0;
	int *array;
	char buffer[64];
	
	array=(int *)malloc(100*sizeof(int)); 

	while(fgets(buffer,64,stdin)){

		if(strncmp(buffer,"x",1)==0){	   
			for(int a=0 ;a<i;a++){
				suma += array[a];
			}
		promedio=((float)suma/i);
		
		int menor = array[0];
		int mayor = array[0];
									
        	for(int p=0;p<i;p++){
      			if(menor>=array[p])		 menor=array[p];
     			else				 menor=menor;
		}
									
		for(int p=0;p<i;p++){
		      if(array[p]>=mayor)	mayor=(int)array[p];
      			
		      else	 mayor=mayor;	    
        	}
									

		while(d<i){
			sumatoria+= (array[d]-promedio)*(array[d]-promedio);
			d++;
		}
		desv=sqrt((double)sumatoria/i);

									
		printf("%.2f",promedio);
		printf("\t%i", menor);
		printf("\t%i", mayor);
		
		printf("\t%.3lf",desv);
		printf("\n");
		
		free(array);						
		break;
		
		}else{ 
			array[i]= (atoi(buffer));
			i++;
			if(size == i){		
				int prevsize=size;
				size=size*2;
				array=(int *)realloc(array,size*sizeof(int));	
				memset(array+prevsize,0,(size-prevsize)*sizeof(int));		
				
				
					
			}
		}
	}
}
