#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_4[43];                       // Tag.BODY
    entity_1 = 25;                           // Tag.BODY
    entity_8 = 49;                           // Tag.BODY
    while(entity_8 < entity_1){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_8] = 'P';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_8;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_6[50];                       // Tag.BODY
    char *entity_5 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 44;                           // Tag.BODY
    char entity_0[31];                       // Tag.BODY
    entity_0[entity_9] = '9';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 63;                           // Tag.BODY
    entity_6[entity_3] = 'T';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER