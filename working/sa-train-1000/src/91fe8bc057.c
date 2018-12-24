#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_0 = 20;                           // Tag.BODY
    entity_3 = 74;                           // Tag.BODY
    char entity_7[25];                       // Tag.BODY
    while(entity_0 < entity_3){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_0] = 'C';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER