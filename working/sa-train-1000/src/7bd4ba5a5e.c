#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_0[9];                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_6[35];                                   // Tag.BODY
    entity_7 = 37;                                       // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = 58;                                       // Tag.BODY
    if (entity_1 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 28;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 52; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = 'n';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_9;                                // Tag.POINTER_DEC
    entity_0[entity_4] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_3 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER