#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_8[21];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_7 = 7;                                        // Tag.BODY
    if (entity_0 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 71;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 70; entity_2 < entity_0; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_2] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_2;                                // Tag.POINTER_DEC
    int entity_9;                                        // Tag.BODY
    char entity_5[92];                                   // Tag.BODY
    char *entity_1 = (char *)(entity_6 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 79;                                       // Tag.BODY
    entity_5[entity_9] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER