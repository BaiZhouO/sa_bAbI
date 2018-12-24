#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    entity_8 = 5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_0[47];                                   // Tag.BODY
    entity_6 = 43;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_3[59];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 29;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 10; entity_7 < entity_9; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_7] = 'H';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_7;                                // Tag.POINTER_DEC
    int entity_2;                                        // Tag.BODY
    entity_3[entity_8] = 'k';                            // Tag.BUFWRITE_TAUT_SAFE
    char *entity_4 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[86];                                   // Tag.BODY
    entity_2 = 41;                                       // Tag.BODY
    entity_1[entity_2] = 'e';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER