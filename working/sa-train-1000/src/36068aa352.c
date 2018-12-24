#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_4 = 36;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_0 = 67;                           // Tag.BODY
    char entity_9[2];                        // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    char entity_3[22];                       // Tag.BODY
    entity_6 = 86;                           // Tag.BODY
    if (entity_8 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9[entity_6] = 'D';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_8){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_0] = 'Q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER