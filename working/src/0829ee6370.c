#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_8[73];                       // Tag.BODY
    entity_2 = 67;                           // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 22;                           // Tag.BODY
    while(entity_2 < entity_9){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_2] = 'O';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char entity_3[27];                       // Tag.BODY
    char entity_1[56];                       // Tag.BODY
    char *entity_0 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_5 = 31;                           // Tag.BODY
    entity_1[entity_5] = 'F';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 98;                           // Tag.BODY
    entity_3[entity_4] = 'n';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER