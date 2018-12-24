#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_0 = 99;                           // Tag.BODY
    entity_3 = 34;                           // Tag.BODY
    char entity_6[34];                       // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    if (entity_8 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 5;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_8){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_0] = 'Z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER