#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    char entity_6[53];                       // Tag.BODY
    entity_5 = 11;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 13;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    if (entity_7 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 47;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_7){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_3] = 'T';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_3;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char *entity_0 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[57];                       // Tag.BODY
    entity_9 = 27;                           // Tag.BODY
    entity_1[entity_9] = 'j';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER