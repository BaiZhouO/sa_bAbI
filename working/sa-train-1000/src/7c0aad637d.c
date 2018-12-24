#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_2[16];                                   // Tag.BODY
    entity_6 = 96;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 96;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 45; entity_5 < entity_8; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_5] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER