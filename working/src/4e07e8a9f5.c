#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_6[95];                                   // Tag.BODY
    char entity_3[93];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_1 = 64;                                       // Tag.BODY
    entity_7 = 35;                                       // Tag.BODY
    for(entity_9 = 83; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = 'N';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_9;                                // Tag.POINTER_DEC
    entity_3[entity_7] = 'C';                            // Tag.BUFWRITE_TAUT_SAFE
    char *entity_4 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER