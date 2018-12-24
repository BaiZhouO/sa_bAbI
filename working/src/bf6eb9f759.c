#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_9[98];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2 = 14;                                       // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    if (entity_1 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 2;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 53; entity_5 < entity_1; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_5] = 'n';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_6 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER