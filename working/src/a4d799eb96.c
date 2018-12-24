#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    entity_9 = 63;                                       // Tag.BODY
    char entity_5[4];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    for(entity_3 = 83; entity_3 < entity_9; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_3;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_1 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER