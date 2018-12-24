#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[18];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_7[83];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_8 = 41;                           // Tag.BODY
    entity_0 = 61;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    char entity_5[88];                       // Tag.BODY
    entity_4 = 72;                           // Tag.BODY
    entity_9 = 64;                           // Tag.BODY
    if (entity_3 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 72;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_3){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = 'o';                // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_9] = 'M';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    entity_2[entity_0] = 'P';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_6 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER