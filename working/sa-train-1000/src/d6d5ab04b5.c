#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[39];                                   // Tag.BODY
    char entity_3[43];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_9 = 43;                                       // Tag.BODY
    entity_0 = 38;                                       // Tag.BODY
    entity_3[entity_9] = 'h';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 31;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 20; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_2] = 'F';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_7 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER