#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_6 = 29;                           // Tag.BODY
    char entity_0[67];                       // Tag.BODY
    entity_9 = 1;                            // Tag.BODY
    while(entity_6 < entity_9){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_6] = 'X';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                            // Tag.BODY
    char entity_2[56];                       // Tag.BODY
    entity_5 = 0;                            // Tag.BODY
    entity_2[entity_5] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER