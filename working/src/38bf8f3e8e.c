#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[47];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_2[80];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 29;                                       // Tag.BODY
    entity_9 = 37;                                       // Tag.BODY
    entity_6[entity_1] = 'U';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_5 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 13;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 54; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_3] = 'Y';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_3;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    char *entity_8 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[68];                                   // Tag.BODY
    entity_4 = 77;                                       // Tag.BODY
    entity_7[entity_4] = '9';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER