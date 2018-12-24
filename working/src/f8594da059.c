#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_6[7];                        // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_9 = 27;                           // Tag.BODY
    entity_8 = 3;                            // Tag.BODY
    while(entity_9 < entity_8){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_9] = 'Y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char entity_2[68];                       // Tag.BODY
    char *entity_4 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 47;                           // Tag.BODY
    entity_2[entity_0] = '4';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER