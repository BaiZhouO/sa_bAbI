#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[90];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 17;                                       // Tag.BODY
    entity_6 = 9;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_4[79];                                   // Tag.BODY
    if (entity_5 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 69;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 47; entity_7 < entity_5; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_7] = 'n';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_4[entity_9] = 'D';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER