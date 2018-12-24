#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2 = 0;                                        // Tag.BODY
    char entity_4[42];                                   // Tag.BODY
    for(entity_1 = 69; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_1] = 'J';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_1;                                // Tag.POINTER_DEC
    int entity_5;                                        // Tag.BODY
    char *entity_7 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[84];                                   // Tag.BODY
    entity_5 = 22;                                       // Tag.BODY
    entity_0[entity_5] = 'K';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER