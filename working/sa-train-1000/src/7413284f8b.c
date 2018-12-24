#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_8[84];                       // Tag.BODY
    char entity_5[81];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_7 = 3;                            // Tag.BODY
    entity_4 = 18;                           // Tag.BODY
    entity_6 = 75;                           // Tag.BODY
    while(entity_7 < entity_4){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_7] = 'Z';                // Tag.BUFWRITE_COND_SAFE
    entity_8[entity_6] = '8';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_7;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char *entity_3 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[65];                       // Tag.BODY
    entity_9 = 27;                           // Tag.BODY
    entity_2[entity_9] = '9';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER