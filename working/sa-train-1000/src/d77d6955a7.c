#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_5[98];                       // Tag.BODY
    entity_8 = 40;                           // Tag.BODY
    entity_2 = 16;                           // Tag.BODY
    while(entity_8 < entity_2){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = 'A';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char *entity_1 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[59];                       // Tag.BODY
    entity_9 = 47;                           // Tag.BODY
    entity_7[entity_9] = 'E';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER