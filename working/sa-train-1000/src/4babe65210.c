#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_0[32];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 19;                                       // Tag.BODY
    char entity_2[11];                                   // Tag.BODY
    entity_1 = 83;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    for(entity_6 = 24; entity_6 < entity_1; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_6] = 'J';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_6;                                // Tag.POINTER_DEC
    char entity_8[44];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_0[entity_7] = 'e';                            // Tag.BUFWRITE_TAUT_SAFE
    char *entity_5 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 47;                                       // Tag.BODY
    entity_8[entity_3] = 'o';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER