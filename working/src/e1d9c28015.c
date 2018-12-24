#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_8[99];                                   // Tag.BODY
    char entity_5[7];                                    // Tag.BODY
    entity_1 = 75;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_7 = 9;                                        // Tag.BODY
    if (entity_3 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 86;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 47; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_0] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_0;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    char *entity_2 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8[entity_7] = 'E';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_6[18];                                   // Tag.BODY
    entity_4 = 20;                                       // Tag.BODY
    entity_6[entity_4] = 'P';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER