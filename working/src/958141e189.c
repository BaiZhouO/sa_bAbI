#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    entity_6 = 65;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_0[94];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_3[12];                       // Tag.BODY
    entity_8 = 59;                           // Tag.BODY
    entity_2 = 55;                           // Tag.BODY
    entity_0[entity_6] = 'w';                // Tag.BUFWRITE_TAUT_SAFE
    while(entity_8 < entity_2){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_8] = 'd';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER