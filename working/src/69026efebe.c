#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_7 = 1;                            // Tag.BODY
    char entity_2[25];                       // Tag.BODY
    entity_3 = 49;                           // Tag.BODY
    char entity_5[47];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_5[entity_7] = 'c';                // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 89;                           // Tag.BODY
    while(entity_3 < entity_6){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_3] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER