#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_2[64];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_4 = 86;                           // Tag.BODY
    char entity_8[2];                        // Tag.BODY
    entity_6 = 19;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_3[20];                       // Tag.BODY
    entity_7 = 26;                           // Tag.BODY
    entity_1 = 43;                           // Tag.BODY
    while(entity_1 < entity_4){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_6] = 'M';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_1] = 'Z';                // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_7] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER