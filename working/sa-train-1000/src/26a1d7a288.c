#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_5[31];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_2 = 55;                                       // Tag.BODY
    if (entity_0 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 60;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 48; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = 'e';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_9;                                // Tag.POINTER_DEC
    char entity_8[67];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char *entity_3 = (char *)(entity_4 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 47;                                       // Tag.BODY
    entity_8[entity_6] = 'y';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER