#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_6[92];                                   // Tag.BODY
    char entity_4[53];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8 = 91;                                       // Tag.BODY
    entity_3 = 88;                                       // Tag.BODY
    if (entity_5 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 24;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_3] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_7 = 43; entity_7 < entity_5; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_7] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_7;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    char entity_1[41];                                   // Tag.BODY
    char *entity_2 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 51;                                       // Tag.BODY
    entity_1[entity_0] = 'C';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER