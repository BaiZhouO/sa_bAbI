#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_9[68];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_0 = 72;                                       // Tag.BODY
    for(entity_7 = 84; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_7] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER