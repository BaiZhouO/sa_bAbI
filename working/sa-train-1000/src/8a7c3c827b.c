#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_7[96];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_2 = 87;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    char entity_8[91];                       // Tag.BODY
    entity_9 = 37;                           // Tag.BODY
    entity_1 = 24;                           // Tag.BODY
    if (entity_6 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 79;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_1] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    while(entity_9 < entity_6){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_9] = 'O';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER