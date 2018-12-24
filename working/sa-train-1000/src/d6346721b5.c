#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_9[48];                                   // Tag.BODY
    entity_0 = 41;                                       // Tag.BODY
    char entity_6[76];                                   // Tag.BODY
    entity_5 = 53;                                       // Tag.BODY
    for(entity_1 = 95; entity_1 < entity_5; entity_1++){ // Tag.BODY
    entity_9[entity_0] = 'L';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_6[entity_1] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_1;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    char *entity_3 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 43;                                       // Tag.BODY
    char entity_2[30];                                   // Tag.BODY
    entity_2[entity_7] = 'X';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER