#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_7[57];                       // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_3 = 79;                           // Tag.BODY
    char entity_9[2];                        // Tag.BODY
    entity_1 = 74;                           // Tag.BODY
    entity_6 = 85;                           // Tag.BODY
    if (entity_8 < entity_3){                // Tag.BODY
    entity_7[entity_6] = 'h';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_8 = 84;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_8){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_1] = 'k';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_1;                    // Tag.POINTER_DEC
    char entity_2[98];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 47;                           // Tag.BODY
    char *entity_5 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2[entity_4] = 'h';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER