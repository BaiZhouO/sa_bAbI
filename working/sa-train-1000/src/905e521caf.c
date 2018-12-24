#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_8[64];                                   // Tag.BODY
    entity_6 = 20;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    for(entity_1 = 26; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = 'k';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER