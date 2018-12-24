#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_8[59];                                   // Tag.BODY
    entity_4 = 45;                                       // Tag.BODY
    for(entity_9 = 30; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_9] = 'B';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER