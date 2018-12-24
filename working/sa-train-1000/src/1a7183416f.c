#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 67;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_0[44];                                   // Tag.BODY
    if (entity_2 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 34;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 68; entity_8 < entity_2; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_8] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_8;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char *entity_7 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 28;                                       // Tag.BODY
    entity_4 = 99;                                       // Tag.BODY
    char entity_6[82];                                   // Tag.BODY
    entity_6[entity_5] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_1[3];                                    // Tag.BODY
    entity_1[entity_4] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER