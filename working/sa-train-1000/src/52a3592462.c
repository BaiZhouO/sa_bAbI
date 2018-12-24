#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_5[89];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_1 = 13;                           // Tag.BODY
    char entity_7[85];                       // Tag.BODY
    entity_2 = 34;                           // Tag.BODY
    entity_3 = 78;                           // Tag.BODY
    while(entity_3 < entity_2){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_3] = 'T';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_3;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char *entity_9 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[13];                       // Tag.BODY
    entity_0 = 88;                           // Tag.BODY
    entity_5[entity_1] = 'm';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_0] = 'R';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER