#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 9;                            // Tag.BODY
    char entity_4[67];                       // Tag.BODY
    entity_6 = 4;                            // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    if (entity_1 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 24;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_1){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_8] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER