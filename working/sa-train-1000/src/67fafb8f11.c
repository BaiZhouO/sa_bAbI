#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_5[16];                       // Tag.BODY
    entity_7 = 20;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_0 = 61;                           // Tag.BODY
    if (entity_8 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 17;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_8){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_0] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER