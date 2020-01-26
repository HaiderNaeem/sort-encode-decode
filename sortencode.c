#include "sortlib.h"

/**********************************************************************
 * The standard input is providing newline terminated text lines.
 * Convert each of such lines into the encoding format and generate the result through the
 * standard output
 * ********************************************************************/
int main(){
	char line[MAXLINE];
	char index[MAXLINE-1];
	int len;
	int i;
	while((len=getLine(line)) > 0){

	for (i=0; i<len; i++){
	index[i] = i;
}


	sortBytes(line, index, len);
	putBytes(line, len);
	putBytes(index, len);
}
}

