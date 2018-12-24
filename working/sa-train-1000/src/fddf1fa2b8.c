#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_0[92];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_6 = 66;                                       // Tag.BODY
    entity_5 = 25;                                       // Tag.BODY
    char entity_3[11];                                   // Tag.BODY
    if (entity_2 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 26;                                       // Tag.BODY
    entity_3[entity_5] = 'L';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_1 = 55; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_1] = '4';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_1;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    char *entity_8 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 41;                                       // Tag.BODY
    char entity_7[46];                                   // Tag.BODY
    entity_7[entity_4] = 'h';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER