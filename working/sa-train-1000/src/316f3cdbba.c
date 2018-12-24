#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    entity_4 = 69;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_8[0];                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_5[48];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_6 = 45;                                       // Tag.BODY
    if (entity_9 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 17;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 56; entity_7 < entity_9; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_4] = 's';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER