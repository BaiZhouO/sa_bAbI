#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[30];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_5 = 77;                                       // Tag.BODY
    if (entity_7 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 73;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 68; entity_1 < entity_7; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_1] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_1;                                // Tag.POINTER_DEC
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_3 = 22;                                       // Tag.BODY
    char *entity_0 = (char *)(entity_6 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[92];                                   // Tag.BODY
    char entity_8[40];                                   // Tag.BODY
    entity_8[entity_3] = 'E';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 26;                                       // Tag.BODY
    entity_9[entity_2] = 'o';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER