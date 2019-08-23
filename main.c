// Program 3.12 Random Number Generator (LCG) C Prgrm - asm function
// C implementation
// asm Random function

#include<stdint.h> // C99 variables type

extern uint32_t M; // extern extends the visibility of this...
                   // ...object declaration outside of this program
									 // here variable is 'declared', but not defined
									 // therfore no memory is not allocated
									 // variable should be defined outside
									 // to define and declare a variable use:
									 // 'uint32_t M' - here memory allocation occurs
									 // here extern is present by default
uint32_t n;        // declared and defined
uint32_t Random(void); // extern by default, therefore 'extern' not...
                       // ... written in function prototype

int main(void){
	M = 1; // seed
while(1){
		n = Random();
	}
}
