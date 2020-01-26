#include <stdio.h>
#include "sortlib.h"
// Read a line of newline terminated text input in the array s.
// Use getchar to read each of the characters.
// Assume that array s has enough space to put the entire
// text line including the newline at the end.
// Return the number of characters read including the newline
// at the end.
// If an EOF is encountered, you must return 0.
int getLine(char s[]){

	int i, c; 
	for (i=0; i<MAXLINE && (c=getchar()) !=EOF && c!='\n'; ++i){

	s[i] = c;
}
	if(c == '\n'){
	s[i] = c;
	++i;
}
	s[i] = '\0';
	//printf("%d\n", i);
	return i;
}



// Get len characters from standard input using getchar.
// Return the number of characters read, which should be equal to len.
// Assume that getchar will never encounter EOF within this function.
int getBytes(char b[], int len){
	int i;
	for(i=0; i<len; i++)
	{

	b[i] = getchar();

	}
	
	return i;
}

// Sort the first len elements of array b in ascending numerical order.
// As you change position of any element in b to a new position, the
// corresponding element in a must also change to the corresponding new
// position in a.
void sortBytes(char b[], char a[], int len){
	int i, j;
	char tmp;


	for(i=0; i<len-2; i++){
	for(j=i+1; j<len-1; j++){

	if(b[i] > b[j]){
	tmp = b[i];
	b[i] = b[j];
	b[j] = tmp;

	tmp = a[i];
	a[i]=a[j];
	a[j]=tmp;
}// end if
}// end for j
}// end for i

}

// Use putchar to send the first len characters in array b to standard
// output one by one from the beginning of the array.
void putBytes(char b[], int len){
	int i;
	for (i=0; i< len; i++)
	{
		putchar(b[i]);

	}


}
