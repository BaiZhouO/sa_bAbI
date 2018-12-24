#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    entity_6 = 16;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_5[65];                       // Tag.BODY
    entity_3 = 10;                           // Tag.BODY
    while(entity_6 < entity_3){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_6] = 'w';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_6;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 71;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_2[77];                       // Tag.BODY
    char *entity_1 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[41];                       // Tag.BODY
    entity_4 = 51;                           // Tag.BODY
    entity_2[entity_4] = 'S';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_9] = 'I';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER