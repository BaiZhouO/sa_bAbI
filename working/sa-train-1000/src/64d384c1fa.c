#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_7 = 14;                                       // Tag.BODY
    char entity_5[18];                                   // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    if (entity_2 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 54;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 72; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_6] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_6;                                // Tag.POINTER_DEC
    char entity_3[10];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char *entity_9 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_1;                                        // Tag.BODY
    entity_8 = 57;                                       // Tag.BODY
    char entity_0[3];                                    // Tag.BODY
    entity_0[entity_8] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 45;                                       // Tag.BODY
    entity_3[entity_1] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER