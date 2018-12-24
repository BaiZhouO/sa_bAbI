#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    entity_2 = 25;                                       // Tag.BODY
    char entity_6[99];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    entity_3 = 2;                                        // Tag.BODY
    char entity_5[88];                                   // Tag.BODY
    if (entity_1 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 38;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 53; entity_0 < entity_1; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_0] = 'I';                            // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_3] = 'K';                            // Tag.BUFWRITE_TAUT_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_0;                                // Tag.POINTER_DEC
    int entity_8;                                        // Tag.BODY
    char entity_4[33];                                   // Tag.BODY
    char *entity_7 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 50;                                       // Tag.BODY
    entity_4[entity_8] = 't';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER