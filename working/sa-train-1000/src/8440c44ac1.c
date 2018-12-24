#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[49];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_5 = 42;                                       // Tag.BODY
    for(entity_1 = 87; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_1] = 'K';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_1;                                // Tag.POINTER_DEC
    char entity_4[18];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char *entity_9 = (char *)(entity_6 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 66;                                       // Tag.BODY
    entity_4[entity_3] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER