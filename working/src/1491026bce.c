#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_7 = 97;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_8[84];                       // Tag.BODY
    char entity_9[46];                       // Tag.BODY
    entity_1 = 22;                           // Tag.BODY
    entity_5 = 26;                           // Tag.BODY
    while(entity_1 < entity_5){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_9[entity_7] = 'O';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = &entity_1;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    entity_0 = 60;                           // Tag.BODY
    char *entity_2 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[46];                       // Tag.BODY
    entity_3[entity_0] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER