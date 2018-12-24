#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[35];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = 63;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_9[31];                                   // Tag.BODY
    entity_3 = 36;                                       // Tag.BODY
    if (entity_2 < entity_7){                            // Tag.BODY
    entity_6[entity_3] = 'C';                            // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                             // Tag.BODY
    entity_2 = 46;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 68; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_1] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_1;                                // Tag.POINTER_DEC
    int entity_8;                                        // Tag.BODY
    entity_8 = 68;                                       // Tag.BODY
    char *entity_4 = (char *)(entity_5 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[30];                                   // Tag.BODY
    entity_0[entity_8] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER