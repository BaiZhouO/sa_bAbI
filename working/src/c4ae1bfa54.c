#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_5 = 88;                           // Tag.BODY
    entity_2 = 50;                           // Tag.BODY
    char entity_9[86];                       // Tag.BODY
    entity_4 = 62;                           // Tag.BODY
    char entity_7[16];                       // Tag.BODY
    while(entity_2 < entity_5){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_2] = 't';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_9[entity_4] = 'q';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER