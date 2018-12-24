#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 86;                           // Tag.BODY
    char entity_5[17];                       // Tag.BODY
    char entity_3[16];                       // Tag.BODY
    entity_1 = 25;                           // Tag.BODY
    entity_8 = 73;                           // Tag.BODY
    while(entity_8 < entity_4){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_8] = '9';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_5[entity_1] = 'H';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = &entity_8;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    entity_7 = 48;                           // Tag.BODY
    char *entity_0 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[22];                       // Tag.BODY
    entity_9[entity_7] = 'I';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER