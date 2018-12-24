#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_9[23];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 32;                           // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    if(entity_7 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 32;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_7] = '3';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    char entity_0[9];                        // Tag.BODY
    char *entity_4 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                            // Tag.BODY
    entity_5 = 56;                           // Tag.BODY
    entity_0[entity_5] = '0';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER