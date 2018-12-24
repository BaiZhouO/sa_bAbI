#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_7[32];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = 2;                                        // Tag.BODY
    for(entity_4 = 31; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_4] = '2';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER