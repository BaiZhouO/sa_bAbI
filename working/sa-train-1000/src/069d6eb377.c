#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_1 = 4;                            // Tag.BODY
    char entity_2[2];                        // Tag.BODY
    entity_7 = 54;                           // Tag.BODY
    entity_8 = 46;                           // Tag.BODY
    char entity_4[91];                       // Tag.BODY
    while(entity_7 < entity_1){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_7] = 'v';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    entity_4[entity_8] = 'W';                // Tag.BUFWRITE_TAUT_SAFE
    int entity_3;                            // Tag.BODY
    char entity_9[46];                       // Tag.BODY
    entity_3 = 9;                            // Tag.BODY
    char *entity_0 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9[entity_3] = 'S';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER