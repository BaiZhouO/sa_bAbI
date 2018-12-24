#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_7[61];                                   // Tag.BODY
    entity_9 = 18;                                       // Tag.BODY
    char entity_8[83];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = 37;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    entity_8[entity_5] = '4';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_4 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 29;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 40; entity_2 < entity_4; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_2] = 'F';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_6 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER