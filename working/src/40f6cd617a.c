#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[21];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_1 = 3;                                        // Tag.BODY
    for(entity_9 = 16; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = '9';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_3 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER