#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[77];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_4 = 33;                           // Tag.BODY
    entity_1 = 21;                           // Tag.BODY
    while(entity_4 < entity_1){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = 'O';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 35;                           // Tag.BODY
    char entity_3[52];                       // Tag.BODY
    entity_2 = 98;                           // Tag.BODY
    char *entity_5 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[91];                       // Tag.BODY
    entity_9[entity_2] = 'c';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_6] = 'b';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER