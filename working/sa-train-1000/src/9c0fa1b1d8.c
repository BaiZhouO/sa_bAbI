#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[38];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_6[94];                                   // Tag.BODY
    entity_4 = 88;                                       // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    entity_9 = 10;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    if (entity_1 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 65;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 62; entity_0 < entity_1; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = 'P';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_0;                                // Tag.POINTER_DEC
    entity_8[entity_4] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_5;                                        // Tag.BODY
    char *entity_7 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 22;                                       // Tag.BODY
    char entity_3[87];                                   // Tag.BODY
    entity_3[entity_5] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER