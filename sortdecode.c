#include "sortlib.h"

/*********************************************************************
 * A file created using the encoding scheme described in the homework
 * assignment document is fed through the standard input.
 * For each of the encoding units (i.e. a sorted sequence of
 * characters followed by a newline, then by the index sequence),
 * perform decoding, and generate the result (including the newline
 * at the end) through the standard output.
 *********************************************************************/
int main(){
	char line[MAXLINE];
	char index[MAXLINE-1];
	int len;
	while((len = getLine(line)) > 0){
	getBytes(index, len);
	sortBytes(index, line, len);
	putBytes(line, len);
}

}


