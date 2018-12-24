#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_5[69];                                   // Tag.BODY
    entity_7 = 91;                                       // Tag.BODY
    for(entity_3 = 61; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_3;                                // Tag.POINTER_DEC
    int entity_9;                                        // Tag.BODY
    entity_9 = 90;                                       // Tag.BODY
    char entity_8[57];                                   // Tag.BODY
    char *entity_1 = (char *)(entity_0 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8[entity_9] = 'w';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER