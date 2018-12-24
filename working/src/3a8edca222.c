#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_0 = 87;                                       // Tag.BODY
    char entity_3[7];                                    // Tag.BODY
    for(entity_8 = 85; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_8] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_8;                                // Tag.POINTER_DEC
    char entity_5[77];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = 54;                                       // Tag.BODY
    entity_5[entity_4] = 'V';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 85;                                       // Tag.BODY
    char *entity_1 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[63];                                   // Tag.BODY
    entity_7[entity_9] = 'y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER