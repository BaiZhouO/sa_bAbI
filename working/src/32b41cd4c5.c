#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_3 = 77;                                       // Tag.BODY
    char entity_5[64];                                   // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 7;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 99; entity_9 < entity_8; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_9;                                // Tag.POINTER_DEC
    int entity_6;                                        // Tag.BODY
    char entity_0[82];                                   // Tag.BODY
    entity_6 = 51;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char *entity_4 = (char *)(entity_7 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 95;                                       // Tag.BODY
    entity_0[entity_1] = 'a';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_2[98];                                   // Tag.BODY
    entity_2[entity_6] = '1';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER