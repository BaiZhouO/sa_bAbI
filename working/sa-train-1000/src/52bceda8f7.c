#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6 = 31;                                       // Tag.BODY
    entity_4 = 82;                                       // Tag.BODY
    char entity_9[96];                                   // Tag.BODY
    char entity_2[62];                                   // Tag.BODY
    for(entity_3 = 57; entity_3 < entity_6; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_3] = 'a';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_3;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    entity_7 = 65;                                       // Tag.BODY
    char *entity_5 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[8];                                    // Tag.BODY
    entity_1[entity_7] = 'A';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_4] = '8';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER