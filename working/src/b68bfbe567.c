#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_5[24];                                   // Tag.BODY
    char entity_7[30];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3 = 91;                                       // Tag.BODY
    entity_0 = 34;                                       // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5[entity_0] = 'j';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 16;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 14; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_1] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_8;                                        // Tag.BODY
    char entity_6[5];                                    // Tag.BODY
    entity_8 = 93;                                       // Tag.BODY
    entity_6[entity_8] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER