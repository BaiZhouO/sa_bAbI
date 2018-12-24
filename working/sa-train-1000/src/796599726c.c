#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_8 = 4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    char entity_9[60];                                   // Tag.BODY
    if (entity_1 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 38;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 71; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_2;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 16;                                       // Tag.BODY
    entity_4 = 62;                                       // Tag.BODY
    char *entity_5 = (char *)(entity_3 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[91];                                   // Tag.BODY
    char entity_6[5];                                    // Tag.BODY
    entity_6[entity_4] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_0] = 'j';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER