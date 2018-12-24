#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_0[90];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 1;                            // Tag.BODY
    entity_8 = 94;                           // Tag.BODY
    entity_7 = 2;                            // Tag.BODY
    char entity_9[10];                       // Tag.BODY
    while(entity_8 < entity_7){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_8] = 't';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    entity_3 = 27;                           // Tag.BODY
    char entity_2[49];                       // Tag.BODY
    entity_2[entity_3] = 'o';                // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_6] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_1 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER