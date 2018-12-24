#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_2[20];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_3[7];                                    // Tag.BODY
    entity_0 = 74;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_4 = 0;                                        // Tag.BODY
    if (entity_8 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 98;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_0] = '9';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_1 = 87; entity_1 < entity_8; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_1] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_1;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    char entity_5[49];                                   // Tag.BODY
    entity_7 = 2;                                        // Tag.BODY
    char *entity_9 = (char *)(entity_6 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5[entity_7] = 'n';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER