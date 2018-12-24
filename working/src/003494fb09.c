#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 72;                           // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    char entity_9[98];                       // Tag.BODY
    entity_8 = 67;                           // Tag.BODY
    char entity_2[47];                       // Tag.BODY
    entity_7 = 3;                            // Tag.BODY
    if (entity_1 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 28;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_1){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_7] = 'f';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_7;                    // Tag.POINTER_DEC
    entity_9[entity_8] = 'f';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_3 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER