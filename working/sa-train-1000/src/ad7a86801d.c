#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    char entity_1[77];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = 40;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_3 = 25;                                       // Tag.BODY
    entity_2 = 62;                                       // Tag.BODY
    char entity_0[30];                                   // Tag.BODY
    char entity_4[90];                                   // Tag.BODY
    if (entity_8 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 0;                                        // Tag.BODY
    entity_4[entity_2] = 'x';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_7] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_5 = 18; entity_5 < entity_8; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = '5';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER