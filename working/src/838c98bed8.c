#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_9 = 91;                           // Tag.BODY
    entity_7 = 2;                            // Tag.BODY
    char entity_3[22];                       // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    if (entity_8 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 19;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_8){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    entity_2 = 53;                           // Tag.BODY
    char *entity_0 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[3];                        // Tag.BODY
    entity_5[entity_2] = 'r';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER