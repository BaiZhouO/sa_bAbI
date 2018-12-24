#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_4 = 67;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 85;                           // Tag.BODY
    char entity_9[38];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 27;                           // Tag.BODY
    char entity_1[74];                       // Tag.BODY
    if (entity_3 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 12;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_3){              // Tag.BODY
    entity_1[entity_4] = 'Q';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_2] = 'k';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER