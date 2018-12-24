#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_3 = 70;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_1[97];                       // Tag.BODY
    char entity_4[22];                       // Tag.BODY
    entity_9 = 86;                           // Tag.BODY
    entity_6 = 32;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    if (entity_8 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 8;                            // Tag.BODY
    entity_1[entity_3] = 'U';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    while(entity_9 < entity_8){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_9] = 'F';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER