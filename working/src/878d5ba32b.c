#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_9[59];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_7[42];                                   // Tag.BODY
    entity_0 = 6;                                        // Tag.BODY
    entity_2 = 40;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 93;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 15; entity_4 < entity_3; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = '9';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_4] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_4;                                // Tag.POINTER_DEC
    char entity_8[14];                                   // Tag.BODY
    char *entity_6 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                                        // Tag.BODY
    entity_5 = 45;                                       // Tag.BODY
    entity_8[entity_5] = 'i';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER