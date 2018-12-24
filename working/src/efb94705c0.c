#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_9[69];                                   // Tag.BODY
    entity_0 = 62;                                       // Tag.BODY
    for(entity_7 = 96; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_7] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_1 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[6];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 92;                                       // Tag.BODY
    entity_4[entity_6] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER