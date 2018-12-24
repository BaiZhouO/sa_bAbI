#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_9 = 46;                           // Tag.BODY
    entity_8 = 10;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_7[90];                       // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    char entity_3[13];                       // Tag.BODY
    entity_1 = 33;                           // Tag.BODY
    if (entity_6 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 17;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_6){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_8] = '7';                // Tag.BUFWRITE_COND_SAFE
    entity_3[entity_9] = 'r';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER