#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_8[44];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_3 = 77;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    if (entity_0 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 87;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 72; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_7;                                // Tag.POINTER_DEC
    int entity_1;                                        // Tag.BODY
    char entity_4[40];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 3;                                        // Tag.BODY
    entity_4[entity_6] = 'n';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_2[52];                                   // Tag.BODY
    char *entity_5 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 79;                                       // Tag.BODY
    entity_2[entity_1] = 'j';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER