#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = 44;                                       // Tag.BODY
    char entity_6[82];                                   // Tag.BODY
    for(entity_4 = 63; entity_4 < entity_1; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_4] = 'c';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER