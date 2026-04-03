#include <stdio.h>

#define LIMIT 100

// Using #undef to remove the definition of LIMIT
#undef LIMIT 

// #pragma directives (Compiler specific - traditionally Turbo C)
void startup_func();
void exit_func();

// Tells compiler to run startup_func before main()
#pragma startup startup_func 
// Tells compiler to run exit_func after main()
#pragma exit exit_func       

int main() {
    printf("Inside main function\n");
    
    // printf("Limit is %d", LIMIT); // This would cause an error now because LIMIT is undefined
    
    return 0;
}

void startup_func() {
    printf("Inside startup function (Runs before main)\n");
}

void exit_func() {
    printf("Inside exit function (Runs after main)\n");
}