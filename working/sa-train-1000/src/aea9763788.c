#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_6[94];                                   // Tag.BODY
    char entity_7[80];                                   // Tag.BODY
    entity_2 = 26;                                       // Tag.BODY
    entity_9 = 36;                                       // Tag.BODY
    entity_0 = 64;                                       // Tag.BODY
    char entity_1[21];                                   // Tag.BODY
    for(entity_4 = 19; entity_4 < entity_2; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'a';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_6[entity_9] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_0] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER