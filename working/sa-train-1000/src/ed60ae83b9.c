#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_9[76];                                   // Tag.BODY
    char entity_0[32];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_6 = 8;                                        // Tag.BODY
    entity_3 = 23;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    for(entity_1 = 10; entity_1 < entity_3; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_1] = 'O';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_1;                                // Tag.POINTER_DEC
    entity_0[entity_6] = '9';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_8;                                        // Tag.BODY
    char entity_4[51];                                   // Tag.BODY
    char *entity_2 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 57;                                       // Tag.BODY
    entity_4[entity_8] = '6';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER