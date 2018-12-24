#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    entity_7 = 88;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_4[41];                       // Tag.BODY
    entity_3 = 33;                           // Tag.BODY
    while(entity_3 < entity_7){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_3] = 't';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_3;                    // Tag.POINTER_DEC
    char entity_6[92];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_2[4];                        // Tag.BODY
    entity_5 = 40;                           // Tag.BODY
    entity_6[entity_5] = 'M';                // Tag.BUFWRITE_TAUT_SAFE
    int entity_1;                            // Tag.BODY
    char *entity_0 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 16;                           // Tag.BODY
    entity_2[entity_1] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER