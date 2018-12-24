#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 94;                           // Tag.BODY
    entity_3 = 85;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[54];                       // Tag.BODY
    char entity_0[51];                       // Tag.BODY
    entity_1 = 42;                           // Tag.BODY
    entity_8[entity_6] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_3 < entity_1){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_3] = 'V';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER