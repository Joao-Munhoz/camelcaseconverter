%{
#include <stdio.h>

#include "ccc_lib.h"
	char vetor[50];
	void zera(){
	int i;
	for(i = 0; i<40;i++)
		vetor[i] = '\0';
}
%}


%%



([a-z]+[_][a-z]+)+ {
	underline_to_camelcase(yytext, vetor);
	printf( "%s", vetor); 
	zera();
}

[A-Z]+[a-z]+([A-Z]+[a-z]*)+ {

	camelcase_to_underline(yytext, vetor);
	printf( "%s", vetor);
	zera();
}
(([A-Z]+[a-z]*[A-Z]*)+[_]) {
	printf("ERRO");
}

%%

int main() {
  yylex();
  return 0;
}

