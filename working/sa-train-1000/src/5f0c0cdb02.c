#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_0[94];                                   // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5 = 68;                                       // Tag.BODY
    if (entity_1 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 72; entity_7 < entity_1; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_7] = '6';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_7;                                // Tag.POINTER_DEC
    int entity_9;                                        // Tag.BODY
    char entity_2[1];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char *entity_4 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 14;                                       // Tag.BODY
    char entity_3[31];                                   // Tag.BODY
    entity_2[entity_6] = '9';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 83;                                       // Tag.BODY
    entity_3[entity_9] = 'w';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER