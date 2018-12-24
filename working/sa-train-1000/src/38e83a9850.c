#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_3 = 8;                            // Tag.BODY
    entity_0 = 53;                           // Tag.BODY
    char entity_4[53];                       // Tag.BODY
    if (entity_8 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 0;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_8){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_3] = 'T';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    char entity_5[67];                       // Tag.BODY
    char *entity_6 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_1;                            // Tag.BODY
    entity_1 = 6;                            // Tag.BODY
    entity_5[entity_1] = 'm';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER