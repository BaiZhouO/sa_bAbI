#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[96];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_1 = 53;                                       // Tag.BODY
    for(entity_9 = 43; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = 'B';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER