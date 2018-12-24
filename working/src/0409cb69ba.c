#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_2[14];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_9 = 4;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_2[entity_9] = '8';                // Tag.BUFWRITE_TAUT_SAFE
    char entity_7[83];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 27;                           // Tag.BODY
    entity_1 = 96;                           // Tag.BODY
    if (entity_6 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 30;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_6){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_1] = 'j';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER