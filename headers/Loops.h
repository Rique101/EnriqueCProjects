// pre-processor directives

// create macro values (constants)
#define STOP 0
#define START 10

// create macro expressions (constants)
#define CONDITION(i) (i > STOP)
#define BREAK(i) (i == 5)
#define CONTINUE(i) (i % 2)

// include C header file
#include <stdio.h>

// function declarations
void loops1(void);
void loops2(void);
void loops3(void);
void loops4(void);
void loops5(void);
void recursion(void);