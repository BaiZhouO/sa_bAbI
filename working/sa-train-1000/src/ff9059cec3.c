#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[5];                        // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_1[94];                       // Tag.BODY
    entity_8 = 77;                           // Tag.BODY
    entity_4 = 39;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_2 = 33;                           // Tag.BODY
    entity_3 = 43;                           // Tag.BODY
    char entity_7[47];                       // Tag.BODY
    entity_6[entity_3] = 'd';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_4] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    while(entity_8 < entity_2){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_8] = 'Y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER