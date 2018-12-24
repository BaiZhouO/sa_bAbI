#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[6];                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_4[33];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_8 = 34;                                       // Tag.BODY
    entity_5 = 88;                                       // Tag.BODY
    entity_4[entity_5] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_1 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 65;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 30; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = 'n';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER