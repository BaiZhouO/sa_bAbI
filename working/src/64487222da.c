#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    entity_3 = 49;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_9[59];                       // Tag.BODY
    char entity_8[52];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 69;                           // Tag.BODY
    entity_1 = 1;                            // Tag.BODY
    while(entity_7 < entity_3){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_7] = 'g';                // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_1] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER