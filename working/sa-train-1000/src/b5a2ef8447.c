#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 24;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_8[90];                       // Tag.BODY
    entity_0 = 24;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if (entity_4 < entity_0){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 15;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_4){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_9] = 'P';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_9;                    // Tag.POINTER_DEC
    char entity_7[97];                       // Tag.BODY
    char *entity_2 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 87;                           // Tag.BODY
    entity_7[entity_6] = '4';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER