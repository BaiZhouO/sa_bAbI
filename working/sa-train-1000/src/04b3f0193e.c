#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 65;                           // Tag.BODY
    char entity_1[63];                       // Tag.BODY
    char entity_9[71];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 82;                           // Tag.BODY
    entity_5 = 10;                           // Tag.BODY
    while(entity_0 < entity_7){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_0] = 'c';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    entity_9[entity_5] = 'Y';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_6 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER