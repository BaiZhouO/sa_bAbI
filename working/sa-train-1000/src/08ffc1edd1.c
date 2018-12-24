#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 22;                                       // Tag.BODY
    char entity_2[29];                                   // Tag.BODY
    for(entity_7 = 36; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_7] = '7';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_3 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER