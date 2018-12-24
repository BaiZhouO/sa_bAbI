#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_5[23];                       // Tag.BODY
    entity_0 = 31;                           // Tag.BODY
    entity_2 = 51;                           // Tag.BODY
    entity_4 = 23;                           // Tag.BODY
    char entity_1[46];                       // Tag.BODY
    while(entity_4 < entity_2){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = 'w';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1[entity_0] = '5';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER