#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_5[55];                       // Tag.BODY
    char entity_7[74];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_8[81];                       // Tag.BODY
    entity_1 = 31;                           // Tag.BODY
    entity_4 = 68;                           // Tag.BODY
    entity_7[entity_4] = 'j';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 18;                           // Tag.BODY
    entity_9 = 45;                           // Tag.BODY
    while(entity_1 < entity_9){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'n';                // Tag.BUFWRITE_COND_SAFE
    entity_5[entity_2] = '5';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER