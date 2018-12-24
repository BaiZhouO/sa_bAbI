#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_4[25];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_0 = 52;                           // Tag.BODY
    entity_9 = 98;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    if (entity_3 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 34;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_3){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = 'g';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER