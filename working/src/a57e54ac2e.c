#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_9 = 90;                           // Tag.BODY
    entity_3 = 91;                           // Tag.BODY
    char entity_2[95];                       // Tag.BODY
    while(entity_3 < entity_9){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_3] = 'c';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    char *entity_8 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_4;                            // Tag.BODY
    char entity_5[98];                       // Tag.BODY
    entity_4 = 85;                           // Tag.BODY
    entity_1 = 16;                           // Tag.BODY
    entity_5[entity_4] = 'M';                // Tag.BUFWRITE_TAUT_SAFE
    char entity_6[47];                       // Tag.BODY
    entity_6[entity_1] = '4';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER