#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_7[38];                                   // Tag.BODY
    entity_2 = 47;                                       // Tag.BODY
    for(entity_6 = 71; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_6] = 'v';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER