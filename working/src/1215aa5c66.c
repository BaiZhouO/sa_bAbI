#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_3[69];                       // Tag.BODY
    entity_0 = 54;                           // Tag.BODY
    entity_1 = 55;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    if (entity_6 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 43;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_6){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_0] = 'L';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER