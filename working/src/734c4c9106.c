#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[52];                       // Tag.BODY
    char entity_2[97];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_5 = 17;                           // Tag.BODY
    entity_7 = 44;                           // Tag.BODY
    entity_0 = 44;                           // Tag.BODY
    char entity_1[62];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 29;                           // Tag.BODY
    while(entity_5 < entity_0){              // Tag.BODY
    entity_3[entity_7] = '6';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = '6';                // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_9] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER