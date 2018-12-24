#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[2];                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_5[26];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_3 = 73;                                       // Tag.BODY
    entity_6 = 84;                                       // Tag.BODY
    entity_1[entity_6] = '1';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_9 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 22;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 61; entity_8 < entity_9; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = 'J';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_8;                                // Tag.POINTER_DEC
    char entity_0[79];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char *entity_2 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 1;                                        // Tag.BODY
    entity_0[entity_7] = 'E';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER