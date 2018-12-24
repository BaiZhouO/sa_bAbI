#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_9[73];                       // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_5 = 44;                           // Tag.BODY
    char entity_8[68];                       // Tag.BODY
    entity_2 = 61;                           // Tag.BODY
    entity_4 = 86;                           // Tag.BODY
    if (entity_6 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 84;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_6){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_2] = 'H';                // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_4] = '0';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char entity_3[40];                       // Tag.BODY
    char *entity_1 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_0;                            // Tag.BODY
    entity_0 = 28;                           // Tag.BODY
    entity_3[entity_0] = 'G';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER