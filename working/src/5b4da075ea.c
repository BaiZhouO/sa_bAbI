#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_8 = 37;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_9 = 81;                           // Tag.BODY
    char entity_0[87];                       // Tag.BODY
    if (entity_2 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 41;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_2){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = '8';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_9;                    // Tag.POINTER_DEC
    char entity_3[39];                       // Tag.BODY
    char *entity_4 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 28;                           // Tag.BODY
    entity_3[entity_6] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER