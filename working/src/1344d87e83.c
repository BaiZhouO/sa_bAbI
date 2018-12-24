#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_1[38];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_9 = 93;                                       // Tag.BODY
    char entity_0[45];                                   // Tag.BODY
    entity_0[entity_9] = 'u';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 82;                                       // Tag.BODY
    if (entity_3 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 44;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 55; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_7] = 'b';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER