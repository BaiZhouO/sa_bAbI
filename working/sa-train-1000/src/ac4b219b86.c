#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    char entity_2[23];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_8 = 94;                           // Tag.BODY
    entity_5 = 71;                           // Tag.BODY
    if (entity_0 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 11;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_0){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_8] = 'k';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER