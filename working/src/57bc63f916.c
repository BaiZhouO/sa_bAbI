#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[6];                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_4 = 28;                                       // Tag.BODY
    for(entity_7 = 11; entity_7 < entity_4; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_0 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER