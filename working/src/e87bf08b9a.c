#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_9[33];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_4[77];                       // Tag.BODY
    entity_2 = 24;                           // Tag.BODY
    entity_9[entity_2] = 'Y';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 96;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 79;                           // Tag.BODY
    while(entity_8 < entity_1){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_8] = 'H';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER