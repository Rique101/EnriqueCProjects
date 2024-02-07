// pre-processor directives

// include Functions.h header file
#include "./headers/Pointers.h"

// write code for functions declared in Pointers.h

// this function will print out its own address to stdout
void printAddress(void){
    // the %p format specifier is a place holder for an address
    printf("The printAddress function is stored at a memory location %p.\n", printAddress);
}

// this function returns the address of the global 
// variable i
int * getAddress(void){
    // declare a pointer to an int
    // the star is needed when declaring a pointer
    int *ptr;

    // get the address of the global variable i
    // and store it in the pointer
    // the ampersand is needed when getting the address
    // of a variable
    ptr = &i;

    // return the address in pointer
    // neither the ampersand or star are needed when
    // using and address in a pointer
    return ptr;
}

// this function returns the value at an address of
// the global variable i
int getDataAtAddress(void){
    // declare a pointer to an int
    // the star is needed when declaring a pointer
    int *ptr;

    // get the address of the global variable i
    // and store it in the pointer
    // the ampersand is needed when getting the address
    // of a variable
    ptr = &i;

    // return the value stored at the address in pointer
    // the star is needed when accessing a value at an
    // address in a pointer
    return *ptr;
}

// this function changes the value at the address of
// the global variable j
double storeDataAddress(void) {
    // declare a pointer to a double
    // the star is needed when declaring a pointer
    double *ptr;

    // get the address of the global variable j
    // and store it in the pointer
    // the ampersand is needed when getting the address
    // of a variable
    ptr = &j;

    // change the value in the global variable j
    // by using pointer
    // the star is needed when accessing a value
    // in a pointer
    *ptr += *ptr;

    // return the value stored at the address in pointer
    // the star is needed when accessing a value at an
    // address in a pointer
    return *ptr;
}

// this function returns the size (memory allocation in bytes)
// of the value in the global variable j
int getDoubleBytes(void) {
    // declare a pointer to a double
    // the star is needed when declaring a pointer
    double *ptr;

    // get the address of the global variable j
    // and store it in the pointer
    // the ampersand is needed when getting the address
    // of a variable
    ptr = &j;

    // return the size of the value in pointer
    // the star is needed when accessing a value at an
    // address in a pointer
    return sizeof(*ptr);
}

// this function returns the size (memory allocation in bytes)
// of the pointer to the global variable j
int getPointerToDouleBytes(void) {
    // declare a pointer to a double
    // the star is needed when declaring a pointer
    double *ptr;

    // get the address of the global variable j
    // and store it in the pointer
    // the ampersand is needed when getting the address
    // of a variable
    ptr = &j;

    // return the size of the pointer
    // neither the star nor ampersand are needed
    // when using and address in a pointer
    return sizeof(ptr);
}

// this function returns the size (memory allocation in bytes)
// of the value in the global variable j
int getIntBytes(void) {
    // declare a pointer to an int
    // the star is needed when declaring a pointer
    int *ptr;

    // get the address of the global variable i
    // and store it in the pointer
    // the ampersand is needed when getting the address
    // of a variable
    ptr = &i;

    // return the size of the value in pointer
    // the star is needed when accessing a value at an
    // address in a pointer
    return sizeof(*ptr);
}

// this function returns the size (memory allocation in bytes)
// of the pointer to the global variable j
int getPointerToIntBytes(void) {
    // declare a pointer to an int
    // the star is needed when declaring a pointer
    int *ptr;

    // get the address of the global variable i
    // and store it in the pointer
    // the ampersand is needed when getting the address
    // of a variable
    ptr = &i;

    // return the size of the pointer
    // neither the star nor ampersand are needed
    // when using and address in a pointer
    return sizeof(ptr);
}

// this function prints the address of a pointer to a
// double that stores NULL
void pointerToNull(void) {
    // declare a pointer to an double
    // the star is needed when declaring a pointer
    double *ptr;

    // store NULL in a pointer
    // NULL is an address where no data exists
    ptr = NULL;

    // get the address of the global variable j
    // and store it in the pointer
    // the ampersand is needed when getting the address
    // of a variable
    ptr = &j;

    // check if pointer is NOT NULL
    // neither the ampersand nor the star are needed
    // when using an address in a pointer
    // NOT NULL - True
    // NULL - False
    if(ptr) {
        // neither the ampersand nor the star are needed
        // when using an address in a pointer
        printf("The address of the pointer to a double that does not store NULL is %p.\n",ptr);
    } else {
        // neither the ampersand nor the star are needed
        // when using an address in a pointer
        printf("The address of the pointer to a double that does store NULL is %p.\n",ptr);
    }
}