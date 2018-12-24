#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_9[60];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_0 = 16;                                       // Tag.BODY
    entity_7 = 23;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    char entity_1[9];                                    // Tag.BODY
    entity_9[entity_0] = 'r';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_6 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 83;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 71; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'J';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER