#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_0[87];                       // Tag.BODY
    char entity_1[19];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_8 = 83;                           // Tag.BODY
    entity_7 = 65;                           // Tag.BODY
    entity_6 = 35;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if (entity_4 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 58;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_6] = 'f';                // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_7 < entity_4){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_7] = 'Z';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER