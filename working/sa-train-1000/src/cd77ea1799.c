#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_9[68];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_5 = 3;                            // Tag.BODY
    char entity_7[37];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_6 = 9;                            // Tag.BODY
    char entity_2[61];                       // Tag.BODY
    entity_2[entity_5] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 93;                           // Tag.BODY
    entity_1 = 87;                           // Tag.BODY
    while(entity_1 < entity_3){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_1] = 'H';                // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_6] = '0';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER