#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[93];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_8[99];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_7 = 25;                           // Tag.BODY
    entity_1 = 68;                           // Tag.BODY
    entity_3 = 22;                           // Tag.BODY
    if (entity_6 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 0;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_6){              // Tag.BODY
    entity_0[entity_3] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_7] = 'p';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_7;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char *entity_5 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 15;                           // Tag.BODY
    char entity_2[49];                       // Tag.BODY
    entity_2[entity_4] = 'Q';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER