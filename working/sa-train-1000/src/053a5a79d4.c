#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_2[5];                                    // Tag.BODY
    entity_6 = 74;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 3;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 16; entity_1 < entity_7; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_1] = 'p';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_1;                                // Tag.POINTER_DEC
    int entity_8;                                        // Tag.BODY
    char entity_3[17];                                   // Tag.BODY
    char *entity_5 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 89;                                       // Tag.BODY
    entity_3[entity_8] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER