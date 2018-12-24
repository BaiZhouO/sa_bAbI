#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_2[68];                       // Tag.BODY
    char entity_1[75];                       // Tag.BODY
    entity_8 = 38;                           // Tag.BODY
    entity_6 = 14;                           // Tag.BODY
    entity_4 = 49;                           // Tag.BODY
    while(entity_8 < entity_4){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_6] = 'i';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_8] = 'R';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                            // Tag.BODY
    entity_5 = 39;                           // Tag.BODY
    char entity_0[21];                       // Tag.BODY
    entity_0[entity_5] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER