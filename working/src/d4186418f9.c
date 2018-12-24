#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_5[1];                        // Tag.BODY
    entity_6 = 40;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 34;                           // Tag.BODY
    while(entity_6 < entity_4){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_6] = 'r';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_6;                    // Tag.POINTER_DEC
    char entity_7[2];                        // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_3 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[29];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_1 = 27;                           // Tag.BODY
    entity_2 = 95;                           // Tag.BODY
    entity_9[entity_1] = 'J';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_2] = 'G';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER