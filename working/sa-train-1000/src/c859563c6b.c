#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[66];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 19;                                       // Tag.BODY
    entity_1 = 43;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    char entity_0[96];                                   // Tag.BODY
    if (entity_6 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 57;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 70; entity_3 < entity_6; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_3] = '9';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_3;                                // Tag.POINTER_DEC
    char entity_8[30];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char *entity_9 = (char *)(entity_5 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4[entity_1] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 58;                                       // Tag.BODY
    entity_8[entity_2] = 'x';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER