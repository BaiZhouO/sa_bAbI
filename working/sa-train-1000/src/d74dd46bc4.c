#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_6[55];                                   // Tag.BODY
    entity_3 = 81;                                       // Tag.BODY
    for(entity_7 = 73; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_7] = 'U';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_7;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    entity_0 = 33;                                       // Tag.BODY
    char *entity_8 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[49];                                   // Tag.BODY
    entity_4[entity_0] = 'm';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER