#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[77];                                   // Tag.BODY
    entity_1 = 77;                                       // Tag.BODY
    entity_3 = 76;                                       // Tag.BODY
    char entity_0[22];                                   // Tag.BODY
    for(entity_2 = 61; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_3] = 'i';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_7 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER