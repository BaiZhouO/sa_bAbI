#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_9[89];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_6 = 73;                                       // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 99;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 55; entity_5 < entity_8; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_5] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_0 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER