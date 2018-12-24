#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[75];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_1[71];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_6 = 46;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_8 = 87;                                       // Tag.BODY
    if (entity_9 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 72;                                       // Tag.BODY
    entity_1[entity_8] = 'V';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_5 = 89; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_5] = 'a';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER