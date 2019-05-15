#include <stdio.h>
#include"Stack.h"
void main() {

	printf("Hello World!");
	Stack s;
	CreateStack(&s);
	Push(4, &s);
	getchar();

}