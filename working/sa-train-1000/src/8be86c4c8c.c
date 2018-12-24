#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 60;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_4[8];                                    // Tag.BODY
    entity_9 = 88;                                       // Tag.BODY
    char entity_3[10];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_1 = 51;                                       // Tag.BODY
    char entity_8[72];                                   // Tag.BODY
    if (entity_6 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 0;                                        // Tag.BODY
    entity_3[entity_1] = 'e';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_7 = 80; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_7] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_5] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER