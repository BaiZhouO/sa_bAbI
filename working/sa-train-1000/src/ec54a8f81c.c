#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    entity_9 = 11;                           // Tag.BODY
    char entity_7[39];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_0[84];                       // Tag.BODY
    entity_8 = 22;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 42;                           // Tag.BODY
    if(entity_9 < entity_8){                 // Tag.BODY
    entity_9 = 40;                           // Tag.BODY
    entity_7[entity_2] = 'S';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_9 = 20;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = 'X';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER