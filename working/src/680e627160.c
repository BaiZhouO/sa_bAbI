#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_1 = 39;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_0[24];                       // Tag.BODY
    entity_3 = 88;                           // Tag.BODY
    entity_7 = 89;                           // Tag.BODY
    char entity_9[82];                       // Tag.BODY
    while(entity_3 < entity_7){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_3] = 'Q';                // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_1] = 'D';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER