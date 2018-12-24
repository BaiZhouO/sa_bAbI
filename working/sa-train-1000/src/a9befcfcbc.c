#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[64];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 67;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 23;                           // Tag.BODY
    while(entity_4 < entity_2){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'P';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    char entity_6[27];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char *entity_9 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 83;                           // Tag.BODY
    entity_6[entity_8] = '6';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER