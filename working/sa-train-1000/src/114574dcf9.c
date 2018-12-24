#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_3 = 94;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_4[56];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_1 = 29;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_6[25];                                   // Tag.BODY
    if (entity_9 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 23;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 41; entity_7 < entity_9; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_7] = 'J';                            // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_3] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER