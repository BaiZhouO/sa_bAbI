#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    entity_8 = 24;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_7[90];                       // Tag.BODY
    entity_5 = 8;                            // Tag.BODY
    while(entity_5 < entity_8){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_5] = 'e';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char entity_1[65];                       // Tag.BODY
    char *entity_2 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 62;                           // Tag.BODY
    entity_1[entity_6] = '6';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER