#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 48;                                       // Tag.BODY
    char entity_3[88];                                   // Tag.BODY
    for(entity_0 = 78; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_0] = '0';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_2 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER