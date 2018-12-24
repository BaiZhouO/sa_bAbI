#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    entity_5 = 17;                                       // Tag.BODY
    char entity_9[59];                                   // Tag.BODY
    if (entity_4 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 41;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 46; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_0] = 'i';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER