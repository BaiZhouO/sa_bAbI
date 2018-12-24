#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 89;                           // Tag.BODY
    char entity_2[0];                        // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_6 = 69;                           // Tag.BODY
    if (entity_5 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 79;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_5){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_0] = 'I';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER