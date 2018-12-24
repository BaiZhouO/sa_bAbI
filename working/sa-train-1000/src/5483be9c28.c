#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    entity_2 = 46;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[86];                       // Tag.BODY
    char entity_9[69];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 11;                           // Tag.BODY
    entity_1 = 56;                           // Tag.BODY
    while(entity_2 < entity_5){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'R';                // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_2] = 'n';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER