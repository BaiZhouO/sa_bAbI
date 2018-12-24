#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    char entity_4[20];                                   // Tag.BODY
    entity_6 = 6;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    if (entity_9 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 72;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 95; entity_3 < entity_9; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_3] = 'o';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_3;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    entity_0 = 62;                                       // Tag.BODY
    char *entity_8 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[33];                                   // Tag.BODY
    entity_1[entity_0] = 'G';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER