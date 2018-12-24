#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_3[9];                        // Tag.BODY
    char entity_8[79];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_1 = 38;                           // Tag.BODY
    entity_2 = 92;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if(entity_9 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 57;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_9] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3[entity_1] = 'i';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER