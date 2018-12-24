#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[43];                       // Tag.BODY
    char entity_3[40];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 11;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_8 = 45;                           // Tag.BODY
    entity_9 = 86;                           // Tag.BODY
    while(entity_7 < entity_9){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = '3';                // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_8] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER