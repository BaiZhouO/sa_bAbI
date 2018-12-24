#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_6[10];                                   // Tag.BODY
    char entity_9[50];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 17;                                       // Tag.BODY
    entity_0 = 9;                                        // Tag.BODY
    for(entity_3 = 92; entity_3 < entity_0; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_3] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_3;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6[entity_2] = 'i';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_1;                                        // Tag.BODY
    char entity_8[28];                                   // Tag.BODY
    entity_1 = 23;                                       // Tag.BODY
    entity_8[entity_1] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER