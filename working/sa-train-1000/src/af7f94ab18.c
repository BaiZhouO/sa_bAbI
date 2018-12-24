#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8 = 52;                                       // Tag.BODY
    entity_7 = 5;                                        // Tag.BODY
    char entity_9[99];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_1[93];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_7){                            // Tag.BODY
    entity_1[entity_8] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    } else {                                             // Tag.BODY
    entity_3 = 82;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 94; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_0] = '1';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_6 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER