#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_7[98];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_8 = 72;                           // Tag.BODY
    entity_3 = 27;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if (entity_5 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 89;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_5){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_3] = 'f';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER