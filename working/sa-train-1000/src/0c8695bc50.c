#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_7[94];                                   // Tag.BODY
    entity_5 = 76;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    for(entity_9 = 20; entity_9 < entity_5; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_9] = '0';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER