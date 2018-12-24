#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_7[83];                       // Tag.BODY
    entity_6 = 54;                           // Tag.BODY
    entity_3 = 89;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if (entity_5 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 38;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_6 < entity_5){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_6] = 'm';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_6;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char *entity_2 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[97];                       // Tag.BODY
    entity_4 = 17;                           // Tag.BODY
    entity_1[entity_4] = '7';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER