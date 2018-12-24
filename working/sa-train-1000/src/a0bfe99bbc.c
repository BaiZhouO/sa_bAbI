#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    entity_0 = 39;                                       // Tag.BODY
    char entity_7[93];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    for(entity_8 = 25; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_8] = 'u';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_8;                                // Tag.POINTER_DEC
    char entity_5[51];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[7];                                    // Tag.BODY
    char *entity_1 = (char *)(entity_3 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 64;                                       // Tag.BODY
    entity_2 = 53;                                       // Tag.BODY
    entity_9[entity_4] = 'C';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_2] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER