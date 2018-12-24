#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_0[24];                                   // Tag.BODY
    char entity_6[21];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_1 = 62;                                       // Tag.BODY
    entity_4 = 54;                                       // Tag.BODY
    if (entity_2 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 52; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_3] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_6[entity_4] = 'i';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = &entity_3;                                // Tag.POINTER_DEC
    int entity_9;                                        // Tag.BODY
    entity_9 = 24;                                       // Tag.BODY
    char entity_7[83];                                   // Tag.BODY
    entity_7[entity_9] = 't';                            // Tag.BUFWRITE_TAUT_SAFE
    char *entity_5 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER