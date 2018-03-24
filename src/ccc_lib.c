
#include "ccc_lib.h"

void camelcase_to_underline(char *input, char *output) {
	
	int i = 0, j = 0;	
	while(input[i] != '\0'){
		if(i == 0)
			output[j] = input[i] + 32; 

		else if(input[i] >= 65 && input[i] <= 90){
			output[j] = '_';
			j++;
			output[j] = input[i] + 32;	
		} 
		else 
			output[j] = input[i];
		i++;
		j++;
	}

  return;
}

void underline_to_camelcase(char *input, char *output) {
	
	int i = 0, j = 0;
	while(input[i] != '\0'){
		if(i == 0)
			output[j] = input[i] - 32; 

		else if(input[i] == '_'){
			output[j] = input[++i] - 32;
		}
		else
			output[j] = input[i];
		i++;
		j++;
	}
  return;
}
