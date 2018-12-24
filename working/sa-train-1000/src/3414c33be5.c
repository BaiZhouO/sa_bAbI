#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 95;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_1[6];                        // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_4 = 75;                           // Tag.BODY
    if (entity_3 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 38;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_3){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_4] = 'N';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                            // Tag.BODY
    char entity_6[90];                       // Tag.BODY
    entity_5 = 19;                           // Tag.BODY
    entity_6[entity_5] = '5';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER