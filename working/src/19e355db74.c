#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_5[98];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 26;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 72;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 13; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_7] = 'E';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_7;                                // Tag.POINTER_DEC
    char entity_9[74];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char *entity_2 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 53;                                       // Tag.BODY
    entity_9[entity_1] = 'R';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER