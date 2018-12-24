#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9 = 34;                                       // Tag.BODY
    char entity_8[21];                                   // Tag.BODY
    for(entity_3 = 31; entity_3 < entity_9; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = 'U';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_3;                                // Tag.POINTER_DEC
    char entity_1[55];                                   // Tag.BODY
    char *entity_4 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                                        // Tag.BODY
    entity_2 = 23;                                       // Tag.BODY
    entity_1[entity_2] = 'j';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER