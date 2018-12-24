#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_5[39];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_3 = 25;                           // Tag.BODY
    entity_0 = 56;                           // Tag.BODY
    if (entity_6 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 83;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_6){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_3] = 'T';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_3;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    entity_8 = 40;                           // Tag.BODY
    char *entity_2 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[68];                       // Tag.BODY
    entity_7[entity_8] = 'T';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER