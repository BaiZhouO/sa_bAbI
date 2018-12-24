#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_5[99];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_0 = 28;                           // Tag.BODY
    entity_6 = 53;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    if (entity_3 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 33;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_3){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_0] = 'p';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER