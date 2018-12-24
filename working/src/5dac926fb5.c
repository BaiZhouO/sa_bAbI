#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[97];                       // Tag.BODY
    entity_1 = 47;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_9 = 67;                           // Tag.BODY
    entity_3 = 1;                            // Tag.BODY
    char entity_2[28];                       // Tag.BODY
    while(entity_9 < entity_1){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_9] = 'c';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    char entity_4[94];                       // Tag.BODY
    entity_2[entity_3] = 'f';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 93;                           // Tag.BODY
    char *entity_0 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4[entity_5] = 'z';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER