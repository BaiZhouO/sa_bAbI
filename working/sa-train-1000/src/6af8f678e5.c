#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[12];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 21;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    for(entity_9 = 36; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_9] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_0 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER