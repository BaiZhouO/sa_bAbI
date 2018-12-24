#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    entity_3 = 5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_4[74];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_5 = 70;                           // Tag.BODY
    if (entity_7 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 64;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_7){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_3] = 'p';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_3;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char *entity_8 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 52;                           // Tag.BODY
    char entity_6[34];                       // Tag.BODY
    entity_6[entity_0] = 'V';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER