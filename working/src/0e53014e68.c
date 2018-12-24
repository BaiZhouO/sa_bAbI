#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    char entity_8[19];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_1[19];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3 = 26;                                       // Tag.BODY
    entity_9 = 8;                                        // Tag.BODY
    if (entity_4 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 28;                                       // Tag.BODY
    entity_8[entity_9] = 'I';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_5 = 28; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[9];                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 40;                                       // Tag.BODY
    entity_6[entity_7] = 't';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER