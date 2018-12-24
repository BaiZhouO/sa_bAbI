#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_9[60];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 6;                                        // Tag.BODY
    for(entity_6 = 10; entity_6 < entity_1; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_6] = 'y';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_7 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER