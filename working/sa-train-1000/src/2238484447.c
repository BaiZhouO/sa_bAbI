#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_5 = 64;                           // Tag.BODY
    char entity_7[37];                       // Tag.BODY
    char entity_1[94];                       // Tag.BODY
    entity_4 = 37;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 21;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    if (entity_6 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1[entity_0] = 'j';                // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 55;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_6){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = 'P';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER