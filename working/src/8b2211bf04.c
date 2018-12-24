#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 18;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_1[40];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_6[54];                       // Tag.BODY
    char entity_2[24];                       // Tag.BODY
    entity_7 = 8;                            // Tag.BODY
    entity_4 = 10;                           // Tag.BODY
    entity_3 = 76;                           // Tag.BODY
    while(entity_4 < entity_8){              // Tag.BODY
    entity_6[entity_3] = '4';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_4] = 'e';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2[entity_7] = 'I';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER