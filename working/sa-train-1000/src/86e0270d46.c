#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_1 = 1;                            // Tag.BODY
    char entity_5[42];                       // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    char entity_7[2];                        // Tag.BODY
    entity_7[entity_1] = '7';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 0;                            // Tag.BODY
    if(entity_4 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = 'w';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER