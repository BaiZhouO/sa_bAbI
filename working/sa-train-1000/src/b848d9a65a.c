#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[71];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 10;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 42;                           // Tag.BODY
    char entity_4[84];                       // Tag.BODY
    entity_5 = 89;                           // Tag.BODY
    while(entity_3 < entity_5){              // Tag.BODY
    entity_1[entity_2] = '8';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_3] = 'W';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_3;                    // Tag.POINTER_DEC
    char entity_0[21];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 45;                           // Tag.BODY
    entity_0[entity_7] = 'z';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_8 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER