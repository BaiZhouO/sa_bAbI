#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_3[93];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = 68;                                       // Tag.BODY
    char entity_6[50];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_4 = 70;                                       // Tag.BODY
    if (entity_0 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 8;                                        // Tag.BODY
    entity_3[entity_1] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_8 = 22; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_8] = 'o';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_7 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER