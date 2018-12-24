#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_8[53];                       // Tag.BODY
    entity_1 = 78;                           // Tag.BODY
    char entity_4[27];                       // Tag.BODY
    entity_7 = 74;                           // Tag.BODY
    entity_9 = 97;                           // Tag.BODY
    while(entity_7 < entity_1){              // Tag.BODY
    entity_4[entity_9] = 'F';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_7] = 'O';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_7;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_2 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[38];                       // Tag.BODY
    entity_3 = 70;                           // Tag.BODY
    entity_0[entity_3] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER