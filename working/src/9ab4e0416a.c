#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 45;                           // Tag.BODY
    char entity_6[3];                        // Tag.BODY
    entity_2 = 60;                           // Tag.BODY
    while(entity_8 < entity_2){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_8] = 'U';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_8;                    // Tag.POINTER_DEC
    char entity_0[5];                        // Tag.BODY
    int entity_7;                            // Tag.BODY
    char *entity_3 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 14;                           // Tag.BODY
    entity_0[entity_7] = 'D';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER