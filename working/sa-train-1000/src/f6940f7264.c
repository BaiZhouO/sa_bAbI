#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_9[74];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_6 = 81;                           // Tag.BODY
    entity_3 = 70;                           // Tag.BODY
    if (entity_5 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 82;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_6 < entity_5){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_6] = 'b';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_6;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char entity_2[93];                       // Tag.BODY
    char *entity_0 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_4;                            // Tag.BODY
    entity_7 = 55;                           // Tag.BODY
    char entity_8[43];                       // Tag.BODY
    entity_2[entity_7] = 'h';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 92;                           // Tag.BODY
    entity_8[entity_4] = 'T';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER