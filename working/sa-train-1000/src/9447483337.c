#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_8[30];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_9[92];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 52;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_1 = 9;                            // Tag.BODY
    if(entity_6 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 2;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_6] = 'i';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_9[entity_1] = 'n';                // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = &entity_6;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    char entity_7[83];                       // Tag.BODY
    char *entity_5 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 92;                           // Tag.BODY
    entity_7[entity_2] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER