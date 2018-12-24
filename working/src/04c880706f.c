#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[58];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 32;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 74;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 67; entity_2 < entity_3; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_2] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_2;                                // Tag.POINTER_DEC
    int entity_1;                                        // Tag.BODY
    entity_1 = 97;                                       // Tag.BODY
    char *entity_5 = (char *)(entity_0 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[35];                                   // Tag.BODY
    entity_8[entity_1] = '8';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER