#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_3[54];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_2[19];                       // Tag.BODY
    entity_4 = 6;                            // Tag.BODY
    entity_8 = 85;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 15;                           // Tag.BODY
    while(entity_4 < entity_8){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    entity_3[entity_0] = '3';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_2[entity_4] = 'T';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_4;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char *entity_1 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[73];                       // Tag.BODY
    entity_6 = 64;                           // Tag.BODY
    entity_7[entity_6] = 'I';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER