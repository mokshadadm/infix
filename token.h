//Header file (.h)
//To be used as 'include "token.h"' in .c files

#define OPERAND 10 
#define OPERATOR 20
#define	END	30
#define ERROR	40
typedef struct token {
	int type; // type takes values OPERAND/OPERATOR/END/
	int number;
	char op;
}token;
token *getnext(char */*, int **/);
