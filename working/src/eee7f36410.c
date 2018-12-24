#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_5[28];                                   // Tag.BODY
    entity_6 = 46;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    for(entity_7 = 97; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_7] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER