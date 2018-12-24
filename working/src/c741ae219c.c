#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[39];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_6 = 72;                                       // Tag.BODY
    for(entity_8 = 42; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_7 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER