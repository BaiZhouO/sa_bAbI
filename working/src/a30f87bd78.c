#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1 = 44;                                       // Tag.BODY
    entity_3 = 34;                                       // Tag.BODY
    char entity_2[78];                                   // Tag.BODY
    char entity_0[43];                                   // Tag.BODY
    entity_0[entity_1] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_8 = 45; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_8] = '9';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER