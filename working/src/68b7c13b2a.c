#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_9 = 77;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_1 = 22;                           // Tag.BODY
    char entity_5[6];                        // Tag.BODY
    char entity_7[48];                       // Tag.BODY
    entity_2 = 92;                           // Tag.BODY
    char entity_0[45];                       // Tag.BODY
    entity_4 = 50;                           // Tag.BODY
    while(entity_2 < entity_9){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'U';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_2] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_2;                    // Tag.POINTER_DEC
    entity_7[entity_1] = 'e';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_8 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER