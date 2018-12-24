#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[54];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 42;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    if (entity_6 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 38; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = '2';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_1 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_3;                                        // Tag.BODY
    char entity_7[98];                                   // Tag.BODY
    entity_3 = 46;                                       // Tag.BODY
    entity_7[entity_3] = 'g';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER