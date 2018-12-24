#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[1];                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 9;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    if (entity_5 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 19;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 20; entity_2 < entity_5; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_2] = 'J';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_2;                                // Tag.POINTER_DEC
    char entity_0[92];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_9 = 89;                                       // Tag.BODY
    char *entity_1 = (char *)(entity_7 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[20];                                   // Tag.BODY
    entity_4[entity_9] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 88;                                       // Tag.BODY
    entity_0[entity_8] = 'x';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER