#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_4 = 90;                           // Tag.BODY
    char entity_3[39];                       // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_2 = 92;                           // Tag.BODY
    if (entity_9 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 97;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_9){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_2] = 'E';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_2;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    char entity_8[51];                       // Tag.BODY
    entity_5 = 79;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_7 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[37];                       // Tag.BODY
    entity_6[entity_5] = 'c';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 64;                           // Tag.BODY
    entity_8[entity_1] = 'i';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER